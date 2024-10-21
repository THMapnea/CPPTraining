#include <iostream>
#include <variant>
#include <vector>




int main() {
    // Create a vector that can store either int or char
    std::vector<std::variant<int, char>> multitype_vector;

    // Add elements to the vector: first a char, then an int
    multitype_vector.push_back('h');  // Adding a char
    multitype_vector.push_back(12);   // Adding an int

    // Loop through each element in the vector
    // We use a const reference to avoid copying the variant and ensure it can't be modified
    for (const std::variant<int, char>& element : multitype_vector) {
        // Use std::visit to handle the different types in the variant
        // The lambda function inside std::visit will handle both int and char
        std::visit([](auto&& arg) { 
            // The 'auto&&' makes the lambda function generic,
            // which means it can accept both int and char
            std::cout << arg << std::endl; // Print the value held in the variant
        }, element);
    }

    return 0;
}
