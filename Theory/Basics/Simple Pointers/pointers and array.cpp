#include<iostream>

// Data
// Every value in the array is stored at consecutive memory addresses.
// For example, in the case of an `int` array, if `my_array[0]` is at address 3000,
// then `my_array[1]` will be at 3004, `my_array[2]` at 3008, and so on (assuming 4 bytes per int).
int my_array[5] = {0, 1, 2, 3, 4}; 
int my_empty_array[5];

// Prototype
void multiply(int *my_array);

int main() {
    // Using pointer arithmetic to fill an empty array
    for(int i = 0; i < 5; i++) {
        // Here, we use the pointer notation to assign values to the array
        *(my_empty_array + i) = i;
    }
    
    // Output the values of `my_empty_array`
    for(int i = 0; i < 5; i++) {
        std::cout << my_empty_array[i] << std::endl;
    }
    
    // Call the multiply function which multiplies the array elements by their index
    multiply(my_array);
    
    return 0;
}

// This function modifies the array by multiplying each element by its index
void multiply(int *my_array) {
    for(int i = 0; i < 5; i++) {
        // Pointer arithmetic to access and modify array elements
        *(my_array + i) *= i;
        // Output each modified element
        std::cout << *(my_array + i) << std::endl;
    }
}
