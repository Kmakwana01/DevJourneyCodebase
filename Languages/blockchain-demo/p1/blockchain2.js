const SHA256 = require("crypto-js/sha256");

class Block {
    constructor(index, timestamp, data, previousHash = "") {
        this.index = index;
        this.timestamp = timestamp;
        this.data = data;
        this.previousHash = previousHash;
        this.nonce = 0;
        this.hash = this.calculateHash();
    }

    calculateHash() {
        return SHA256(
            this.index.toString() +
            this.previousHash +
            this.timestamp +
            JSON.stringify(this.data) +
            this.nonce.toString()
        ).toString();
    }

    mineBlock(difficulty) {
        const target = "0".repeat(difficulty);
        let attempts = 0;
        const maxAttempts = 1000000;

        while (this.hash.substring(0, difficulty) !== target && attempts < maxAttempts) {
            this.nonce++;
            this.hash = this.calculateHash();
            attempts++;
            if (attempts % 100000 === 0) {
                console.log(`Mining block ${this.index}... Nonce: ${this.nonce}, Hash: ${this.hash}`);
            }
        }

        if (attempts >= maxAttempts) {
            console.log(`❌ Mining failed for block ${this.index} after ${maxAttempts} attempts`);
            return false;
        }

        console.log(`✅ Block ${this.index} mined! Nonce: ${this.nonce}, Hash: ${this.hash}, Attempts: ${attempts}`);
        return true;
    }
}

class Blockchain {
    constructor() {
        this.chain = [];
        this.difficulty = 2; // Lowered for reliability
        const genesis = this.createGenesisBlock();
        if (genesis) this.chain.push(genesis);
    }

    createGenesisBlock() {
        const genesisBlock = new Block(0, "01/02/2025", "Genesis Block", "0");
        return genesisBlock.mineBlock(this.difficulty) ? genesisBlock : null;
    }

    getLatestBlock() {
        return this.chain[this.chain.length - 1];
    }

    addBlock(newBlock) {
        newBlock.previousHash = this.getLatestBlock().hash;
        if (newBlock.mineBlock(this.difficulty)) {
            this.chain.push(newBlock);
            return true;
        }
        console.log(`❌ Failed to add block ${newBlock.index}`);
        return false;
    }

    isChainValid() {
        for (let i = 0; i < this.chain.length; i++) { // Check all blocks
            const currentBlock = this.chain[i];
            const previousBlock = i > 0 ? this.chain[i - 1] : null;

            if (currentBlock.hash !== currentBlock.calculateHash()) {
                console.log(`❌ Invalid hash at block ${i}`);
                return false;
            }
            if (i > 0 && currentBlock.previousHash !== previousBlock.hash) {
                console.log(`❌ Invalid previousHash at block ${i}`);
                return false;
            }
            if (currentBlock.hash.substring(0, this.difficulty) !== "0".repeat(this.difficulty)) {
                console.log(`❌ Invalid proof of work at block ${i}`);
                return false;
            }
        }
        return true;
    }

    tamperBlock(index, newData) {
        if (index < 0 || index >= this.chain.length) {
            console.log(`❌ Invalid block index`);
            return;
        }
        console.log(`\n⚠️ Tampering with block ${index}...`);
        this.chain[index].data = newData;
        this.chain[index].hash = this.chain[index].calculateHash();
        console.log("Blockchain valid after tampering? " + this.isChainValid());
        this.reMineChain(index);
    }

    reMineChain(startIndex) {
        console.log("\n🔄 Re-mining all affected blocks...");
        for (let i = startIndex; i < this.chain.length; i++) {
            if (!this.chain[i].mineBlock(this.difficulty)) {
                console.log(`❌ Mining failed for block ${i}`);
                return;
            }
            // Update hash and previousHash for all subsequent blocks
            if (i + 1 < this.chain.length) {
                this.chain[i + 1].previousHash = this.chain[i].hash;
                this.chain[i + 1].hash = this.chain[i + 1].calculateHash(); // Recalculate hash
                this.chain[i + 1].nonce = 0; // Reset nonce for re-mining
                if (!this.chain[i + 1].mineBlock(this.difficulty)) {
                    console.log(`❌ Mining failed for block ${i + 1}`);
                    return;
                }
            }
        }
        console.log("Blockchain valid after re-mining? " + this.isChainValid());
    }
}

// 🚀 Testing the Blockchain
let myCoin = new Blockchain();

if (myCoin.chain.length > 0) {
    console.log("\n✅ Adding blocks...");
    myCoin.addBlock(new Block(1, "02/24/2025", { amount: 10 }));
    myCoin.addBlock(new Block(2, "02/25/2025", { amount: 50 }));
    myCoin.addBlock(new Block(3, "02/26/2025", { sender: "Alice", receiver: "Bob", amount: 25 }));

    console.log("\nBlockchain valid? " + myCoin.isChainValid());
    console.log("\n📜 Full chain:");
    console.log(JSON.stringify(myCoin.chain, null, 2));

    // 🔥 Tampering Test
    myCoin.tamperBlock(1, { amount: 100 });
    console.log("\n📜 Full chain:");
    console.log(JSON.stringify(myCoin.chain, null, 2));

} else {
    console.log("❌ Blockchain initialization failed due to genesis block mining failure.");
}