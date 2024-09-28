#include<iostream>

// We define a global variable `n` to specify the size of the dynamic array
int n = 10;

int main() {
    // Dynamically allocate memory for an array of integers with `n` elements
    // The `new` keyword is used to allocate the memory on the heap
    int *dynamic_array = new int[n]; // This creates an array of size `n`

    // Fill the array with values and print them
    for(int i = 0; i < n; i++) {
        // Assign the value i * i to each element in the array
        dynamic_array[i] = i * i;  // Equivalent to *(dynamic_array + i) = i * i;

        // Accessing the elements using pointer arithmetic (can also use array notation)
        std::cout << "The element in the array is: " << *(dynamic_array + i) << std::endl;
    }

    // After we're done with the dynamically allocated memory, it's important to free it
    // The `delete[]` operator is used to deallocate the memory of an array allocated with `new`
    delete[] dynamic_array;

    // After deleting the array, accessing it is undefined behavior (but here it might still show old values)
    // Although memory is deallocated, we are trying to print the values that might still be in the location
    std::cout << "\nAfter deleting the dynamic array:\n";
    for(int i = 0; i < n; i++) {
        // This will most likely show garbage values or whatever data is now in that memory region
        std::cout << "The element in the array is: " << *(dynamic_array + i) << std::endl;
    }

    return 0;
}
