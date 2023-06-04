#include <iostream>
#include <string>

int main() {
    std::string input;

    // Read input until the end of line (EOF)
    while (std::getline(std::cin, input)) {
        // Print the input
        std::cout <<  input << std::endl;
    }

    return 0;
}