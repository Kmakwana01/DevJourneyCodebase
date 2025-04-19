// SPDX-License-Identifier: MIT
pragma solidity ^0.8.28;

contract MyContract {
    string public myString = "Hello World";
    bool public myBollean = false;
    uint public myUint = 1;
    int public myInt = 1;
    address public myAddress = 0xDc64a140Aa3E981100a9becA4E685f962f0cF6C9;

    string name = "E1";

    //visibility
    string name1 = 'name1';
    string private name2 = 'name2';
    string internal name3 = 'name3';
    string public name4 = 'name4';

    constructor(string memory _name) {}

    function setName(string memory _name) public {
        name = _name;
    }

    function getName() public view returns (string memory) {
        return name;
    }

    function resetName(string memory _name) internal {
        name = _name;
    }
}
