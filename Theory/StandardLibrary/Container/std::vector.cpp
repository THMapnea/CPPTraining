#include<iostream>
#include<vector>

// The vector class in C++ provides a dynamic array which automatically adjusts its size as elements are added or removed.
// Unlike fixed-size arrays, vectors can grow or shrink dynamically.

int main() {
    
    // Declaring a dynamic array using std::vector. We specify the type of elements it will hold (in this case, integers).
    // No need to specify the size initially; the vector will grow as we add elements.
    std::vector<int> dynamic_array;
    
    // Adding elements to the vector using .push_back().
    // This adds elements at the end of the vector, and the vector resizes as needed to accommodate the new elements.
    for(int i = 0; i < 1000; i++) {
        dynamic_array.push_back(i);  // Adds the number i to the end of the vector.
        std::cout << dynamic_array[i] << std::endl;  // Prints the element at index i.
    }
    
    // We can access the last element of the vector using .back().
    std::cout << "The last element is: " << dynamic_array.back() << std::endl;  // Output: 999 (since the loop added numbers from 0 to 999)
    
    // To get the first element of the vector, we use .front().
    std::cout << "The first element is: " << dynamic_array.front() << std::endl;  // Output: 0
    
    // To check the current size of the vector (i.e., how many elements it contains), we use .size().
    std::cout << "The size of my dynamic array is: " << dynamic_array.size() << std::endl;  // Output: 1000
    
    // To access an element at a specific position safely, we can use .at(index).
    // Unlike using the [] operator, .at() performs bounds checking and throws an exception if the index is out of range.
    std::cout << "The element at position 3 is: " << dynamic_array.at(3) << std::endl;  // Output: 3
    
    // To clear the vector (i.e., remove all elements), we use .clear().
    dynamic_array.clear();  // The vector is now empty.
    
    // We can initialize a vector with a specified size. 
    // In this case, we create a vector of size 1000 with all elements default-initialized to 0.
    std::vector<int> sized_dynamic_array(1000);
    
    // To get the maximum possible size the vector can grow to, we use .max_size().
    // This returns a theoretical upper limit on the number of elements the vector can hold, depending on system memory.
    std::cout << "The max size is: " << sized_dynamic_array.max_size() << std::endl;
    
    // To check how many elements the vector can store without needing to reallocate memory, we use .capacity().
    std::cout << "The capacity of the array is: " << sized_dynamic_array.capacity() << std::endl;
    
    // If the vector has allocated more memory than it is currently using, we can call .shrink_to_fit() to free the unused memory.
    // This reduces the capacity of the vector to fit its current size.
    sized_dynamic_array.shrink_to_fit();
    
    // To check if the vector is empty (i.e., contains no elements), we use .empty().
    std::cout << "Is the array empty? " << (sized_dynamic_array.empty() ? "Yes" : "No") << std::endl;  // Output: No (since we initialized it with 1000 elements)
    
    return 0;
}
