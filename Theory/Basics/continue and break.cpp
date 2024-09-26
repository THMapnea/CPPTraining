#include<iostream>

int main() {
    // The 'for' loop will iterate 10 times (i = 0 to i = 9)
    for(int i = 0; i < 10; i++) {
        // When 'i' equals 8, the 'break' statement will terminate the loop early
        if(i == 8) {
            // 'break' will exit the loop entirely when i equals 8
            break;
        } else if(i == 5) {
            // 'continue' will skip the rest of the code in the current iteration
            // and jump directly to the next iteration (i will increment by 1)
            continue;
        }
        
        // This code will not run when i == 5 due to the 'continue' statement
        std::cout << "Iteration: " << i << std::endl;
    }

    return 0;
}
