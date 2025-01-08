#include<iostream>
#include<vector>

// Template to create a structure that can hold two values of the same type
template <typename T>
struct myStructure{
    T value1;  // First value of type T
    T value2;  // Second value of type T
};

// Template to create a structure that can hold two values of different types
template<typename T, typename C>
struct doubleStruct{
    T value1;  // First value of type T
    C value2;  // Second value of type C
};

int main(){
    // Example of using myStructure with integer values
    myStructure<int> s;
    s.value1 = 1;
    s.value2 = 2;
    
    // Example of using myStructure with vector of integers
    myStructure<std::vector<int>> sa;
    sa.value1 = {0, 1};  // Initialize value1 with vector {0, 1}
    sa.value2 = {3, 4};  // Initialize value2 with vector {3, 4}
    
    // Example of using doubleStruct with char and int
    doubleStruct<char, int> ds;
    ds.value1 = 'a';  // Assign character 'a' to value1
    ds.value2 = 2;    // Assign integer 2 to value2

    return 0;
}
