#include<iostream>

// Data: Multi-dimensional arrays

// A 3x3 2D array (matrix). Each row contains 3 integers, and the entire array occupies 36 bytes
// (3 rows, each row has 3 integers, and each integer typically occupies 4 bytes).
int two_d_array[3][3] = {
    {0, 1, 2}, // Row 0
    {3, 4, 5}, // Row 1
    {6, 7, 8}  // Row 2
};

// A more complex 4D array. It has 5 blocks, each containing a 3x2x4 structure.
// Each block has 3 rows, each row has 2 "sub-arrays", and each sub-array has 4 float elements.
float four_d_array[5][3][2][4];

// Prototypes
void setZero(int (*two_d_array)[3]); // Function to set all elements of a 2D array to zero
void setFourDArray(float (*four_d_array)[3][2][4]); // Function to initialize and print a 4D array

int main() {
    // Demonstrating various ways to access and print the 2D array memory addresses and values
    std::cout << "Accessing the array in various ways to see what happens:" << std::endl;
    
    // Printing the base address of the 2D array (address of the first element in memory).
    std::cout << two_d_array << std::endl;  // Base address of the array (same as &two_d_array[0][0])
    
    // Dereferencing the base address gives the address of the first row (array[0]), i.e., address of two_d_array[0].
    std::cout << *two_d_array << std::endl; // Address of the first row
    
    // This is also the address of the first row (same as *two_d_array).
    std::cout << two_d_array[0] << std::endl; // Address of row 0
    
    // Address of the first element in row 0, column 0 (same as the base address of the entire array).
    std::cout << &two_d_array[0][0] << std::endl; // Address of first element in the 2D array (row 0, column 0)

    // Loop to access and print each element in the 2D array using traditional row-column indexing
    std::cout << "Array values (row-column access):" << std::endl;
    for (int i = 0; i < 3; i++) { // Iterating over rows
        for (int j = 0; j < 3; j++) { // Iterating over columns
            // Accessing the value at row i, column j
            std::cout << two_d_array[i][j] << ",";
        }
    }
    std::cout << std::endl; // End of array output
    
    // Set all elements of the 2D array to zero using the `setZero` function
    setZero(two_d_array);

    // Printing the 2D array after setting all values to zero using pointer arithmetic
    std::cout << "Array after setting to zero (pointer arithmetic access):" << std::endl;
    for (int i = 0; i < 3; i++) { // Iterate over rows
        for (int j = 0; j < 3; j++) { // Iterate over columns
            // Accessing the element using pointer arithmetic
            // *(two_d_array + i) gives the i-th row (which is an array), and +j moves to the j-th element in that row
            std::cout << *(*(two_d_array + i) + j) << ",";
        }
    }
    std::cout << std::endl; // End of array output
    
    // Initialize and print values from the 4D array using nested loops in `setFourDArray`
    std::cout << "Initializing and displaying 4D array values:" << std::endl;
    setFourDArray(four_d_array); // Call the function to initialize and print the 4D array

    return 0; // End of the program
}

// Function to set all elements of a 2D array to zero
// Here, we pass the 2D array as a pointer to its first element, which is an array of 3 integers.
void setZero(int (*two_d_array)[3]) {
    for (int i = 0; i < 3; i++) { // Loop through rows
        for (int j = 0; j < 3; j++) { // Loop through columns
            // Using pointer arithmetic to set each element to zero
            *(*(two_d_array + i) + j) = 0;
        }
    }
}

// Function to initialize and print the elements of a 4D array.
// Here, we pass a pointer to the first element of the 4D array, specifying the sizes of the other dimensions.
void setFourDArray(float (*four_d_array)[3][2][4]) {
    float z = 0; // A counter variable to fill the 4D array with values
    // Iterating through all dimensions of the 4D array
    for (int i = 0; i < 5; i++) { // First dimension (5 blocks)
        for (int j = 0; j < 3; j++) { // Second dimension (3 rows in each block)
            for (int k = 0; k < 2; k++) { // Third dimension (2 sub-arrays in each row)
                for (int m = 0; m < 4; m++) { // Fourth dimension (4 float elements in each sub-array)
                    // Using pointer arithmetic to access and set the element
                    *(*(*(*(four_d_array + i) + j) + k) + m) = (z / 2); // Fill with half of z
                    z++; // Increment counter z
                    // Print the current element of the 4D array
                    std::cout << *(*(*(*(four_d_array + i) + j) + k) + m) << ",";
                }
            }
        }
    }
    std::cout << std::endl; // End of 4D array output
}
