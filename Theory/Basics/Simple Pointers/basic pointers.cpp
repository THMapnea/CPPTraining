#include<iostream>

// Declare a global variable
int x = 10;

// Before continuing, remember:
// - (&) is the "address-of" operator (to get the address of a variable)
// - (*) is the "dereference" operator (to access the value stored at a pointer's address)

int main() {
    // Declare a pointer of type int
    int *p; 
    
    // Assign the address of variable x to the pointer p
    p = &x;
    
    // p holds the address of x, and *p gives the value at that address
    std::cout << "The address of the x variable is: " << p 
              << " and the value pointed to is: " << *p << std::endl; 
    
    // Using the pointer, we can modify the value stored at the address
    *p = 8;
    
    // Now the value stored at x's address has been changed, but the address remains the same
    std::cout << "The address of the x variable is: " << p 
              << " and the modified value pointed to is: " << *p << std::endl;
    
    // Pointer arithmetic: when we increment a pointer, it moves based on the type size.
    // For an int pointer, incrementing by 1 means moving 4 bytes forward (on most systems).
    std::cout << "The next memory address is: " << p + 1 << std::endl;
    
    return 0;
}
