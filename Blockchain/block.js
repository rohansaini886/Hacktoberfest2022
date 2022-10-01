const SHA256 = require('crypto-js/sha256');

/*
 * Block class. BLocks are the fundamental part of the blockchain.
 * Blocks are created one after the other, containing information about the previous one in the hash that identifies the block.
 */
export default class Block {
    /*
     * When a block is created a hash for it has to be calculated. This hash contains the timestamp of creation, transactions to be recorded in the block,
     * and the hash of the previous block. The genesis block (Initial block of the chain) is the only case when we won't have a hash for the previous block.
     * 
     */
    constructor(timestamp, transactions, previousHash = '') {
        this.timestamp = timestamp;
        this.transactions = transactions;
        this.previousHash = previousHash;
        this.nonce = 0;
        // The calculation of the hash must be at the end so to ensure that all data is assigned correctly before calculation
        this.hash = this.calculateHash();
    }

    /*
     * The hash of the block is created concatenating all the strings from the different properties of the block that were assigned before the block's hash
     * is calculated. The hash can use a number of different cryptographic hash functions to create it, in this case we are using the SHA256 algorithm to
     * achieve the desired string.
     */
    calculateHash() {
        return SHA256(this.previousHash + this.timestamp + JSON.stringify(this.transactions) + this.nonce).toString();
    }

    /*
     * A block is mined in this case when the nonce achieves the desired difficulty (?)
     */
    mineBlock(difficulty) {
        while (this.hash.substring(0, difficulty) !== Array(difficulty + 1).join("0")) {
            this.nonce++;
            this.hash = this.calculateHash();
        }
        console.log("Block mined, nonce: " + this.nonce + ", hash: " + this.hash);
    }

    /*
     * Checking that all transactions inside the block are valid. Traverse all transactions within the block, verifying them one by one
     */
    hasValidTransactions() {
        for (const tx of this.transactions) {
            if (!tx.isValid()) {
                return false;
            }
        }
        return true;
    }
}