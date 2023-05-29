
#include <iostream>
#include <string>

int main() {std::string str = "Hello, Hello, Hello";
std::string searchStr = "Hello";

size_t pos = str.find(searchStr);  // Find the first occurrence

while (pos != std::string::npos) {
    // Do something with the occurrence found
    std::cout << "Found at position: " << pos << std::endl;

    // Find the next occurrence, starting from pos + 1
    pos = str.find(searchStr, pos + 1);
}}
