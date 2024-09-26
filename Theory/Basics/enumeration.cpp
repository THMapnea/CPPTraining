#include<iostream>

// The enumeration 'RGB' assigns values to red, green, and blue.
// By default, 'red' is assigned the value 0, 'green' is 1, and 'blue' is 2.
enum RGB { red, green, blue };

// You can specify the starting value of an enumerator.
// Here, 'cyan' starts with 2, 'purple' is 3, and 'yellow' is 4.
enum CPY { cyan = 2, purple, yellow };

// You can use enum to implement boolean-like values.
// This example creates a custom BOOL type where 'FALSE' is 0 and 'TRUE' is 1.
// This is similar to a boolean type in C (before C++ added built-in bool types).
typedef enum BOOL { FALSE, TRUE } BOOL;

int main() {
    // Declare a variable 'r' of the RGB enum type and assign it the value 'red'.
    RGB r = red;
    
    // Declare a variable 'p' of the CPY enum type and assign it the value 'purple'.
    CPY p = purple;
    
    // Output the values of the enumerators. 
    // 'r' corresponds to the value of 'red' (0), and 'p' corresponds to 'purple' (3).
    std::cout << "The number associated with red is: " << r << std::endl;
    std::cout << "The number associated with purple is: " << p << std::endl;
    
    // Using the custom BOOL type to evaluate a condition.
    // Since 'TRUE' is defined as 1, this if statement will execute.
    if (TRUE) {
        std::cout << "The value is true" << std::endl;
    }

    // Since 'FALSE' is defined as 0, this condition evaluates as false (!0 = true).
    // Therefore, this block will also execute.
    if (!FALSE) {
        std::cout << "The value is false" << std::endl;
    }
    
    return 0;
}
