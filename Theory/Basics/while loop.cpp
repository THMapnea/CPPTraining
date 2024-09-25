#include<iostream>

int main() {
    int x = 0;
    
    // A while loop continues iterating as long as the condition is true.
    // In this case, the loop will run while 'x' is less than 3.
    // The condition is checked before each iteration.
    while(x < 3) {
        // Print the current iteration number.
        // 'x++' increments the value of 'x' after printing it, avoiding an infinite loop.
        std::cout << "Iteration number: " << x++ << std::endl;  // Output: 0, 1, 2
    }
    
    // Alternative way to write the while loop, more similar to how a for loop works.
    // Here, 'i' is incremented before the comparison, so the first iteration will start with i=0.
    int i = -1;
    while(++i < 3) {
        // Print the current iteration number.
        // Since 'i' is incremented before the comparison, we start with 'i' at 0.
        std::cout << "Iteration for loop number: " << i << std::endl;  // Output: 0, 1, 2
    }

    return 0;
}
