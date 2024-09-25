#include<iostream>

// In video games, it's common to choose between a limited set of options, such as moving in four directions.
// Using multiple if-else statements can get messy, so the switch statement is a more efficient and readable alternative.
// The switch statement checks a variable against constant values and executes the corresponding block of code.

int main() {
    int x;
    
    // Ask the user to press a number between 0 and 3.
    std::cout << "Press a number between 0 and 3: ";
    std::cin >> x;
    
    // The switch statement checks the value of 'x' and matches it to one of the cases.
    // Each case is a potential outcome for the value of 'x'.
    switch(x) {
        case 0:
            std::cout << "You pressed 0" << std::endl;
            break;  // 'break' stops further execution and exits the switch block after this case is executed.
            
        case 1:
            std::cout << "You pressed 1" << std::endl;
            break;
        
        case 2:
            std::cout << "You pressed 2" << std::endl;
            break;
        
        case 3:
            std::cout << "You pressed 3" << std::endl;
            break;
        
        // The default case handles any values not explicitly listed in the cases above.
        default:
            std::cout << "You pressed any other key or key combination" << std::endl;
    }
    
    return 0;
}
