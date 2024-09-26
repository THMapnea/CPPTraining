#include<iostream>

int main() {
    // Basic for loop with incrementing iterator.
    // The for loop consists of three parts: 
    // 1. Initialization (int i = 0) - the loop starts with i = 0.
    // 2. Condition (i < 3) - the loop runs as long as i < 3 is true.
    // 3. Increment (i++) - i is incremented after each iteration.
    for(int i = 0; i < 3; i++) {
        std::cout << "Iteration incremented number: " << i << std::endl;
    }
    
    // A for loop with decrementing iterator.
    // In this loop, i starts at 10 and decreases by 1 (i--) until i is greater than 3.
    for(int i = 10; i > 3; i--) {
        std::cout << "Iteration decremented number: " << i << std::endl;
    }

    // For loop without curly braces.
    // If the loop body contains only one statement, the braces {} can be omitted.
    // However, it's often better to include them for clarity.
    for(int i = 0; i < 3; i++)
        std::cout << "Iteration no brackets number: " << i << std::endl;

    // A for loop with multiple iterators.
    // You can initialize and update multiple variables in a single for loop.
    // In this case, 'i' is incremented and 'p' is decremented in each iteration.
    for(int i = 0, p = 2; i < 3; i++, p--) {
        std::cout << "Iteration multiple number i: " << i << " and p: " << p << std::endl;
    }

    // A for loop with different step sizes (e.g., i += 2).
    // In this case, 'i' is incremented by 2 in each iteration, so it takes values 0, 2, 4, ...
    for (int i = 0; i < 6; i += 2) {
        std::cout << "Iteration with different increment number: " << i << std::endl;
    }

    // You can also use complex expressions and auto iterators for different loop styles.
    // Depending on your needs and writing style, you can customize the loop behavior.
    
    return 0;
}
