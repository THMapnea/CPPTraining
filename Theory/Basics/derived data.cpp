#include<iostream>
#include<string> // Required to use std::string

// A lot of this data will be explained more thoroughly later, this is just a brief recap

int main() {
    // Derived Data Types:

    // 1. Arrays
    // Arrays store multiple values of the same type. The size of an array is fixed at declaration.
    // The array index starts from 0, and all elements are stored in consecutive memory locations.
    int array[5] = {1, 2, 3, 4, 5}; // Declare an array with 5 integers
    std::cout << "The first element is: " << array[0] << std::endl;

    // 2. Pointers
    // A pointer holds the memory address of a variable.
    int value = 69; // Declare an integer variable
    int* pt = &value; // 'pt' is a pointer to 'value', it stores the address of 'value'
    std::cout << "The address of the variable 'value' is: " << pt << std::endl;

    // You can also dereference a pointer to access the value at the memory address.
    std::cout << "The value pointed by 'pt' is: " << *pt << std::endl;

    // 3. References
    // A reference is an alias for an existing variable. It does not have its own memory location, 
    // it directly refers to the original variable.
    int& ref = value; // 'ref' is a reference to 'value'
    std::cout << "We are referencing 'value' as: " << ref << std::endl;

    // Modifying 'value' will also change 'ref' since they share the same memory space.
    value = 96; // Change 'value'
    std::cout << "The modified value through reference is: " << value 
              << " and the value in the reference is the same: " << ref << std::endl;

    // 4. Strings (from the standard library)
    // A string is a sequence of characters. In C++, std::string is a more convenient alternative to C-style strings (char arrays).
    // It dynamically handles the memory and allows you to work with strings more easily.
    std::string phrase = "Hello quantum world"; // Declaring and initializing a string
    std::cout << phrase << std::endl;

    // Note: A C-style string would be declared as an array of characters (char[]) but requires manual memory management.
    // Example: char c_str[] = "Hello"; is a C-style string.

    return 0;
}
