// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;

contract SimpleStorage {
    uint256 public storedValue; // A number stored on the blockchain

    // Set the number
    function set(uint256 _value) public {
        storedValue = _value;
    }

    // Get the number
    function get() public view returns (uint256) {
        return storedValue;
    }
}