const SHA256 = require("crypto-js").SHA256;

// Block class to represent each block in the chain
class Block {
    constructor(index, timestamp, data, previousHash = "") {
        this.index = index;           // Block number
        this.timestamp = timestamp;   // When the block was created
        this.data = data;             // The data (e.g., transaction details)
        this.previousHash = previousHash; // Hash of the previous block
        this.hash = this.calculateHash(); // Hash of this block
    }


    calculateHash() {
        // Generate a SHA-256 hash based on block contents
        return SHA256(
            this.index +
            this.previousHash +
            this.timestamp +
            JSON.stringify(this.data)
        ).toString();
    }
}

// Blockchain class to manage the chain
class Blockchain {
    constructor() {
        // Initialize with a genesis block
        this.chain = [this.createGenesisBlock()];
    }

    createGenesisBlock() {
        // The first block in the chain
        return new Block(0, "01/01/2025", "Genesis Block", "0");
    }

    getLatestBlock() {
        // Return the most recent block
        return this.chain[this.chain.length - 1];
    }

    addBlock(newBlock) {
        // Link the new block to the previous one and add it
        newBlock.previousHash = this.getLatestBlock().hash;
        newBlock.hash = newBlock.calculateHash();
        this.chain.push(newBlock);
    }

    isChainValid() {
        // Check if the chain is tampered with
        for (let i = 1; i < this.chain.length; i++) {
            const currentBlock = this.chain[i];
            const previousBlock = this.chain[i - 1];

            // Verify current block's hash
            if (currentBlock.hash !== currentBlock.calculateHash()) {
                console.log(`Invalid hash at block ${i}`);
                return false;
            }

            // Verify the link to the previous block
            if (currentBlock.previousHash !== previousBlock.hash) {
                console.log(`Invalid previousHash at block ${i}`);
                return false;
            }
        }
        return true;
    }
}

// Test the blockchain
let myCoin = new Blockchain();
console.log("Adding blocks...");
myCoin.addBlock(new Block(1, "02/24/2025", { amount: 10 }));
myCoin.addBlock(new Block(2, "02/25/2025", { amount: 50 }));
myCoin.addBlock(new Block(3, "02/26/2025", { sender: "Alice", receiver: "Bob", amount: 25 }));

console.log("Blockchain valid? " + myCoin.isChainValid());
console.log("Full chain:");
console.log(JSON.stringify(myCoin.chain, null, 2));

// Tamper with the chain to test validation
console.log("\nTampering with block 1...");
myCoin.chain[1].data = { amount: 100 };
console.log("Blockchain valid after tampering? " + myCoin.isChainValid());
console.log("Full chain: " + JSON.stringify(myCoin.chain, null, 2));