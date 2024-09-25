#include<iostream>

// Global variables are declared outside of any function, class, or struct.
// These variables can be accessed anywhere in the code after their declaration.
// Global variables should be used with caution, as they are accessible throughout the entire program.
int global_var = 10;

struct wrapper {
    // This is a member variable of the 'wrapper' struct.
    // It is accessible only when referencing an instance of 'wrapper'.
    int struct_variable = 23;
};

// A namespace allows you to group variables, functions, classes, etc., under a common name.
// This is useful for organizing code and avoiding name conflicts.
namespace my_namespace {
    // This variable is scoped within the 'my_namespace' namespace.
    // It can be accessed by referencing the namespace: 'my_namespace::my_namespace_var'.
    int my_namespace_var = 12;
}

int main() {
    // Function-scoped variables are declared within a function and are only accessible within that function.
    // These variables exist only during the execution of the function and are destroyed when the function exits.
    int function_var = 20;

    // Accessing the namespace variable by specifying the namespace.
    // Similar to how we access 'std::' functions (like 'std::cout'), we reference 'my_namespace::' to use the variable.
    std::cout << "Namespace variable: " << my_namespace::my_namespace_var << std::endl;

    // Accessing the global variable declared outside the function.
    // Global variables can be accessed from any function or block of code after their declaration.
    std::cout << "Global variable: " << global_var << std::endl;

    // Creating an instance of the 'wrapper' struct.
    wrapper w;

    // Accessing the struct member variable using the instance 'w'.
    std::cout << "Struct variable: " << w.struct_variable << std::endl;

    // Accessing the function-scoped variable. This variable is only visible within this function.
    std::cout << "Function variable: " << function_var << std::endl;

    return 0;
}
