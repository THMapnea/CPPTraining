#include<iostream>

// We will now see a little bit of pointer arithmetic and how to use the `sizeof` function with pointers and values

// Data: A simple integer variable
int a = 1002;

int main() {
    // Declare a pointer `p` and assign it the address of the variable `a`
    int *p = &a;
    
    // `sizeof(p)` returns the size of the pointer itself (usually 8 bytes on 64-bit systems)
    // `sizeof(*p)` returns the size of the data type the pointer is pointing to (in this case, an `int`, which is typically 4 bytes)
    std::cout << "The size of the pointer is " << sizeof(p)
              << " bytes and the size of the pointed value (int) is: " << sizeof(*p) << " bytes" << std::endl;

    return 0;
}
