import Block from './block';
import Transaction from './transaction';

/*
 * Blockchain class. A collection of blocks, keeps a sane count of the blocks iniside the chain. Makes sense of the mining difficulty.
 * Accounts for all the transactions across blocks and gives information of the platform.
 */
export default class BlockChain {
  /*
   * When the chain is created it is done so with an initial block (Genesis block without a previous block hash), a set difficulty for block mining and
   * and a reward for mining blocks (coins freshly minted that are given to the succesfull miner).
   */
    constructor() {
        this.chain = [this.createGenesisBlock()];
        this.difficulty = 3;
        this.pendingTransactions = [];
        this.miningReward = 100;
    }

    /*
     * A block is created as a genesis block, this block only contains the creation timestamp and optional data as set properties.
     */
    createGenesisBlock() {
        return new Block(Date.now(), [], "");
    }

    /*
     * The method to get the current height of the chain (the latest added block in the chain length).
     */
    getHeight() {
      return this.chain.length - 1;
    }

    /*
     * Method to get a specific block of the chain, set by height (the specific index in the chain).
     */
    getBlock(height) {
        return this.chain[height];
    }

    //Incoming miner address
    minePendingTransactions(miningRewardAddress) {
        const latestBlock = this.getBlock(this.getHeight());
        // Pakcage all pending transactions together in the same block
        let block = new Block(Date.now(), this.pendingTransactions, latestBlock.hash);
        // Mining, that is, constantly trying nonce to make the hash Vluw meet the requirements
        block.mineBlock(this.difficulty);

        console.log('Block successfully mined!');
        this.chain.push(block);

        // Put the miner fee transaction into pendingTransactions for the next processing operation. The miner fee transaction is characterized by the source account being empty.
        this.pendingTransactions = [
            new Transaction(null, miningRewardAddress, this.miningReward)
        ];
    }

    /*
     * Adding a new transaction to the pending transactions queue. This queue is where the transactions are waiting for a miner that will
     * record them in a freshly mined block.
     */
    addTransaction(transaction) {
        if (!transaction.fromAddress || !transaction.toAddress) {
            throw new Error('Transaction must include from and to address');
        }
        // Verify that the transaction is valid and valid before it can be submitted to the trading pool.
        if (!transaction.isValid()) {
            throw new Error('Cannot add invalid transaction to the chain');
        }
        this.pendingTransactions.push(transaction);
    }

    /*
     * The most primitive way of figuring out an address's balance is going through the whole chain, block by block, and read all the transactions
     * where the queried address appears to add and substract the transaction's amount.
     */
    getBalanceOfAddress(address) {
        let balance = 0;
        for (const block of this.chain) {
            for (const transaction of block.transactions) {
                if (transaction.fromAddress === address) {
                    balance -= transaction.amount;
                }

                if (transaction.toAddress === address) {
                    balance += transaction.amount;
                }
            }
        }
        return balance;
    }

    /*
     * Verifying that the chain is valid consists of:
     * - Checking that each block has valid transactions.
     * - Checking that each block's calculated hash is correct according to the block's parameters.
     * - Checking that each block's calculated hash is correct according to the previous' block's hash and used paramters.
     */
    isChainValid() {
        for (let i = 1; i < this.chain.length; i++) {
            const currentBlock = this.chain[i];
            const previousBlock = this.chain[i - 1];
            // Check if all transactions in the block are valid.
            if (!currentBlock.hasValidTransactions()) {
                return false;
            }
            if (currentBlock.hash !== currentBlock.calculateHash()) {
                console.error("hash not equal: " + JSON.stringify(currentBlock));
                return false;
            }
            if (currentBlock.previousHash !== previousBlock.calculateHash()) {
                console.error("previous hash not right: " + JSON.stringify(currentBlock));
                return false;
            }
        }
        return true;
    }
}