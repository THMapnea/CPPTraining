#include<iostream>

// Declaring the function prototype. 
// This tells the compiler that a function named 'sum' exists, takes two 'int' parameters, and returns an 'int'.
// Prototypes are necessary when the function is defined after the `main()` function.
// If we declare the function before `main()`, we can skip the prototype declaration.
int sum(int a, int b);

int main() {
    int x = 2;
    int y = 1;

    // Calling the 'sum' function and storing the result in a variable.
    int result = sum(x, y);
    
    // Output the result of the sum.
    std::cout << result << std::endl;  // Output: 3

    // We can also directly call the function within another statement, like in this 'cout' line.
    // The result of 'sum(x, y)' is calculated and printed inline.
    std::cout << "The result is: " << sum(x, y) << std::endl;  // Output: The result is: 3

    return 0;
}

// Definition of the 'sum' function.
// This function takes two parameters, 'a' and 'b', both of type 'int', and returns their sum.
// The parameters 'a' and 'b' are local to the function and represent the values passed to it when the function is called.
// These parameters are placeholders, and their actual values come from the arguments passed during the function call.
int sum(int a, int b) {
    // The function returns the sum of 'a' and 'b'.
    return a + b;
}
