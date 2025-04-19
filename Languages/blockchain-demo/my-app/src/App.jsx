import { useState, useEffect } from 'react';
import './App.css';
import { ethers } from 'ethers';

function App() {
  const [value, setValue] = useState('');
  const [storedValue, setStoredValue] = useState(null);
  const [userAddress, setUserAddress] = useState(null); // Fixed: 'second' was undefined
  const contractAddress = '0x1f60fb20aF50FdEc847a7bC82bc03C53bb5f2eC5'; // Your contract address

  const abi = [
    {
      "inputs": [],
      "name": "get",
      "outputs": [{ "internalType": "uint256", "name": "", "type": "uint256" }],
      "stateMutability": "view",
      "type": "function"
    },
    {
      "inputs": [{ "internalType": "uint256", "name": "_value", "type": "uint256" }],
      "name": "set",
      "outputs": [],
      "stateMutability": "nonpayable",
      "type": "function"
    },
    {
      "inputs": [],
      "name": "storedValue",
      "outputs": [{ "internalType": "uint256", "name": "", "type": "uint256" }],
      "stateMutability": "view",
      "type": "function"
    }
  ];

  useEffect(() => {
    loadBlockchainData();
  }, []);

  async function loadBlockchainData() {
    if (!window.ethereum) {
      alert('Please install MetaMask!');
      return;
    }

    try {
      const accounts = await window.ethereum.request({ method: 'eth_requestAccounts' });
      setUserAddress(accounts[0]);
      const provider = new ethers.BrowserProvider(window.ethereum); // Using BrowserProvider for ethers v6
      const signer = await provider.getSigner();
      const contract = new ethers.Contract(contractAddress, abi, signer);

      const value = await contract.get();
      setStoredValue(value.toString());
    } catch (error) {
      console.error('Error loading blockchain data:', error);
      if (error.code === 'CALL_EXCEPTION') {
        alert('Contract call failed. Check address or network.');
      } else {
        alert('Failed to load data. Check console.');
      }
    }
  }

  async function setNewValue() {
    if (!window.ethereum) {
      alert('Please install MetaMask!');
      return;
    }
    if (!value) {
      alert('Please enter a value!');
      return;
    }

    try {
      await window.ethereum.request({ method: 'eth_requestAccounts' });
      const provider = new ethers.BrowserProvider(window.ethereum);
      const signer = await provider.getSigner();
      const contract = new ethers.Contract(contractAddress, abi, signer);

      const tx = await contract.set(value);
      await tx.wait();
      await loadBlockchainData();
      alert('Value set successfully!');
    } catch (error) {
      console.error('Error setting value:', error);
      alert('Error setting value. Check console.');
    }
  }

  return (
    <div style={{ textAlign: 'center', marginTop: '50px' }}>
      <h1>Simple Storage dApp</h1>
      <p>Connected Address: {userAddress || 'Not connected'}</p>
      <div>
        <input
          type="number"
          value={value}
          onChange={(e) => setValue(e.target.value)}
          placeholder="Enter a number"
        />
        <button onClick={setNewValue}>Set Value</button>
      </div>
      <div style={{ marginTop: '20px' }}>
        <button onClick={loadBlockchainData}>Get Value</button>
        <p>Stored Value: {storedValue !== null ? storedValue : 'Loading...'}</p>
      </div>
    </div>
  );
}

export default App;