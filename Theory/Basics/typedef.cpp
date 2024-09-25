#include<iostream>

// In C and C++, we can define custom data types to simplify complex structures and improve code readability.
// This is especially useful when working with large programs where we define custom structures or enumerations.

// typedef is used to create an alias for data types. This can reduce code repetition and make it easier to manage complex types.

// Define an enum called 'confused_bool' which can represent three possible values: FALSE, TRUE, and MAYBE.
// In this case, typedef gives the alias 'confused_bool' to the enum so that we can use 'confused_bool' as a type.
typedef enum confused_bool {
    FALSE,  // 0
    TRUE,   // 1
    MAYBE   // 2
} confused_bool;

// Define a structure to represent a pair of integers.
// We can use this to group two related values together, such as coordinates or dimensions.
typedef struct {
    int r;  // Represents one value (e.g., radius, row)
    int h;  // Represents another value (e.g., height, column)
} Pair;

int main() {
    // Using our custom enum 'confused_bool'.
    // 'x' is a variable of type confused_bool, and we assign it the value MAYBE.
    confused_bool x = MAYBE;
    
    // Output the value of 'x'.
    // Since MAYBE is the third value in the enum, it will be represented as '2' when printed.
    std::cout << x << std::endl;  // Output: 2
    
    // Using the custom structure 'Pair'.
    // We create a variable 'p' of type Pair, and we can access its members 'r' and 'h'.
    Pair p;
    p.h = 1;  // Assigning 1 to the 'h' member of the Pair structure.
    p.r = 2;  // Assigning 2 to the 'r' member of the Pair structure.
    
    // We can now use 'p' to work with these paired values, as it groups them into a single unit.

    return 0;
}
