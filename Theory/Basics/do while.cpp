#include<iostream>

int main() {
    int i = 0; // Initialize a counter
    
    // The 'do-while' loop always executes the block of code at least once.
    // This is different from a regular 'while' loop, where the condition is checked before the first iteration.
    // In a 'do-while' loop, the condition is checked after the block is executed.
    do {
        std::cout << "Iteration number: " << i++ << std::endl;
    } while (i < 10);  // The loop will continue until 'i' is less than 10.
    
    return 0;
}
