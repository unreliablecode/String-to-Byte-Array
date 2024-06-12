# String to Byte Array Conversion in C++

This repository contains a simple C++ program that converts a string into a byte array.

## Description

The program defines a function `stringToBytes` that takes a string as input and returns a byte array. The byte array is a `std::vector<uint8_t>`, where each element is a byte representation of a character in the string.

The `main` function demonstrates how to use the `stringToBytes` function. It converts a string "Hello, World!" into a byte array and prints the byte array.

## Code

Here is the main part of the code:

```cpp
#include <iostream>
#include <vector>
#include <cstdint>

std::vector<uint8_t> stringToBytes(const std::string& str) {
    return std::vector<uint8_t>(str.begin(), str.end());
}

int main() {
    std::string str = "Hello, World!";
    std::vector<uint8_t> byteArray = stringToBytes(str);

    std::cout << "Byte array: ";
    for (uint8_t byte : byteArray) {
        std::cout << static_cast<int>(byte) << " ";
    }

    return 0;
}
