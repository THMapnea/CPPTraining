#include<iostream>

// Constants
const int array_dim = 10;  // Constant dimension for the array

// Data arrays
int my_array[5] = {6, 5, 3, 29, 0};  // Fixed-size array with initialized values
int my_no_dimension_array[] = {0, 12, 3, 4, 56, 1, 2, 3, 4, 5, 6, 7, 8};  // Compiler automatically determines the size
int array[array_dim];  // Array with size defined by the constant

// Function prototypes
void show(int* array, int array_dim);
void generate(int* array, int array_dim);
void pointerAccessToArray(int* array, int array_dim);

int main() {
    // Accessing and displaying the array using a for-loop
    // where 'i' is the iterator to access the i-th element of the array
    for (int i = 0; i < 5; i++) {
        std::cout << "Element " << my_array[i] << " is at index " << i << std::endl;
    }
    
    // Generate values in the array and display them using functions
    generate(array, array_dim);  // Filling the array with generated values
    show(array, array_dim);  // Displaying the array content
    pointerAccessToArray(array, array_dim);  // Accessing the array using pointer arithmetic
    
    return 0;
}

// This function displays the contents of the array
// The array is passed as a pointer, so it can modify or access the original memory space
void show(int* array, int array_dim) {
    for (int i = 0; i < array_dim; i++) {
        std::cout << "Array element at index " << i << " is: " << array[i] << std::endl;
    }
}

// This function fills the array with values based on its index (i.e., array[i] = i)
void generate(int* array, int array_dim) {
    for (int i = 0; i < array_dim; i++) {
        array[i] = i;
    }
}

// This example demonstrates pointer arithmetic to access array elements.
// Using the pointer, we increment the address to access each element in the array.
void pointerAccessToArray(int* array, int array_dim) {
    for (int i = 0; i < array_dim; i++) {
        *(array + i) = i;  // Accessing and modifying the array using pointer arithmetic
        std::cout << "Element at position " << i << " accessed through pointer arithmetic is: " << *(array + i) << std::endl;
    }
}
