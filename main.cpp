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
