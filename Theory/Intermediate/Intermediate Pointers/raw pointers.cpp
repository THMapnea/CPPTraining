#include<iostream>

// Raw pointers in C++ hold a certain memory address and are used primarily for dynamic memory management.

int main(){
    
    // Dynamically allocate memory for an `int` on the heap.
    // The pointer `ptr` is created in stack memory, but it holds the address of an integer in heap memory.
    int *ptr = new int;  // Allocates space for an integer on the heap.
    
    // By default, the value in this dynamically allocated memory may be garbage (uninitialized memory).
    std::cout << "The memory space created contains: " << *ptr << std::endl;

    // Let's assign a value to the allocated memory space.
    *ptr = 2;  // Dereference the pointer to assign a value to the memory location it points to.
    std::cout << "The memory space created now contains: " << *ptr << std::endl;
    
    // Once we're done with the dynamically allocated memory, we need to deallocate it.
    // `delete` frees the memory back to the system. This is essential to avoid memory leaks.
    delete ptr;
    
    // After deleting the memory, `ptr` still holds the memory address, but that memory has been deallocated.
    // Accessing the memory after deletion is undefined behavior. 
    // In some cases, you may still see the old value, but the memory no longer belongs to your program.
    std::cout << "After deletion, the memory space contains: " << *ptr << " (undefined behavior)" << std::endl;
    
    return 0;
}
