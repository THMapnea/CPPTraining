#include<iostream>

// Prototypes
// Function overloading: We declare multiple functions with the same name (`show`),
// but different parameter types (int, char, float).
void show(int number);
void show(char character);
void show(float floating_point_number);

int main() {
    // Declare three variables of different types: int, char, and float
    int n = 1;           // Integer
    char c = 's';        // Character
    float f = 3.14;      // Floating-point number

    // Call the overloaded function `show`. Based on the argument's data type,
    // the compiler will decide which version of `show` to call.
    show(n);    // Calls the version of `show` that takes an int
    show(f);    // Calls the version of `show` that takes a float
    show(c);    // Calls the version of `show` that takes a char

    return 0;
}

// Function Definitions:

// This version of `show` takes an integer argument and prints a message specific to integers.
void show(int number) {
    std::cout << number << " is an integer number" << std::endl;
}

// This version of `show` takes a char argument and prints a message specific to characters.
void show(char character) {
    std::cout << character << " is a character" << std::endl;
}

// This version of `show` takes a float argument and prints a message specific to floating-point numbers.
void show(float floating_point_number) {
    std::cout << floating_point_number << " is a floating-point number" << std::endl;
}
