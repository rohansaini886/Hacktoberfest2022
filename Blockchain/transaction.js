const SHA256 = require('crypto-js/sha256');
import Elliptic from 'elliptic';

const ec = new Elliptic.ec('secp256k1');

export default class Transaction {
    constructor(fromAddress, toAddress, amount) {
        this.fromAddress = fromAddress;
        this.toAddress = toAddress;
        this.amount = amount;
    }

    // Calculate the hash in order to do the signature. You need to do this because the hash value will be signed instead of the original information directly. 
    calculateHash() {
        return SHA256(this.fromAddress + this.toAddress + this.amount).toString();
    }

    // Incoming key
    signTransaction(signingKey) {
        // Verify if the source account is the person's address, or more specifically, verify whether the source address is the public key corresponding to the private key.
        if (signingKey.getPublic('hex') !== this.fromAddress) {
            throw new Error('You cannot sign transactions for other wallets!')
        }
        const txHash = this.calculateHash();
        // Sign the transaction hash with the private key.
        const sign = signingKey.sign(txHash, 'base64');
        // Convert the signature to the DER format.
        this.signature = sign.toDER('hex');
        console.log("signature: " + this.signature)
    }

    isValid() {
        // The miner fee transaction fromAddress is empty, verification cannot be completed.
        if (this.fromAddress === null) return true;
        // Determine if the signature exists
        if (!this.signature || this.signature.length === 0) {
            throw new Error('No signature in this transaction');
        }
        // Transcode fromAddress to get the public key (this process is reversible, as it is just a format conversion process.)
        const publicKey = ec.keyFromPublic(this.fromAddress, 'hex');
        // Use the public key to verify if the signature is correct, or more specifically if the transaction was actually initiated from fromAddress.
        return publicKey.verify(this.calculateHash(), this.signature);
    }
}