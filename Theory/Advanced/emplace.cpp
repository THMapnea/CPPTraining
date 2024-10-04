#include <iostream>
#include <vector>
#include <string>

int main() {
    // We create a vector that holds objects of type std::string
    std::vector<std::string> names;

    // Use emplace_back to construct a new string in place
    // Instead of creating a temporary string object and copying it to the vector,
    // emplace_back constructs the string directly inside the vector
    names.emplace_back("Alice");  // Constructs "Alice" inside the vector
    names.emplace_back(5, 'X');   // Constructs "XXXXX" (5 'X' characters) directly inside the vector

    std::cout << "Names in the vector:" << std::endl;
    for (const auto& name : names) {
        std::cout << name << std::endl;
    }

    return 0;
}
