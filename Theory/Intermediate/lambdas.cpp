#include<iostream>

int main() {
    // Data: Declaring three integers `a`, `b`, and `c`
    int a = 1;
    int b = 2;
    int c = 3;

    // The `auto` keyword is used here so that the compiler automatically deduces the type of the lambda.
    // Lambdas are anonymous functions that can be declared and used inline.

    // 1. Empty lambda: This lambda doesn't take any parameters, doesn't capture anything, and doesn't return anything.
    auto emptyLambda = [] () {
        std::cout << "This is my empty lambda" << std::endl;
    };

    // 2. Lambda with parameters: This lambda takes two integers as input and prints their sum.
    auto parameterLambda = [] (int x, int y) {
        std::cout << "Sum of x and y: " << x + y << std::endl; 
    };

    // 3. Lambda with a capture list: This lambda captures the variable `c` from the outer scope by value.
    // It multiplies `c` with the two passed parameters and prints the result.
    auto captureListLambda = [c] (int x, int y) {
        std::cout << "Multiplication using captured value c: " << c * x * y << std::endl;
    };

    // 4. Lambda capturing `c` by reference: This lambda captures `c` by reference and modifies its value.
    // This means that any changes to `c` inside the lambda will affect the original `c` in the outer scope.
    auto referenceLambda  = [&c] (int x) {
        c += x;  // Modify `c` by adding `x` to it
        std::cout << "Updated c after adding x: " << c << std::endl;
    };
        
    // Calling the lambda functions
    emptyLambda();  // Calls the empty lambda
    parameterLambda(a, b);  // Passes `a` and `b` to the lambda which adds them and prints the sum
    captureListLambda(a, b);  // Uses captured value `c` from the outer scope and multiplies with `a` and `b`
    referenceLambda(a);  // Modifies `c` by adding `a` to it (since `c` is captured by reference)

    return 0;
}
