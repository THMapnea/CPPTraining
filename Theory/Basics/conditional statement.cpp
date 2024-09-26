#include<iostream>

// Defining global boolean variables and an integer
bool a = true;
bool b = false;
int c = 100;

int main() {
    // Checking if 'c' is greater than 10
    if(c > 10) {
        std::cout << "The number is bigger" << std::endl;
    } else {
        std::cout << "The number is smaller" << std::endl;
    }
    
    // Chained if-else condition to handle multiple ranges of 'c'
    if(c > 1000) {
        std::cout << "The number c is humongous" << std::endl;	
    } else if(c > 10) {
        std::cout << "The number c is very big" << std::endl;
    }

    // Simplified condition (same as if (a == true))
    if(a) {
        std::cout << "a is true" << std::endl;
    }
    
    // Checking if 'b' is false (same as if (b == false))
    if(!b) {
        std::cout << "b is false" << std::endl;
    }
    
    // Nested if-else statements (demonstrating the use of logical operators)
    if(a) {                         // If 'a' is true
        if(!b) {                    // And 'b' is false
            if(!a || !b) {           // If 'a' is false or 'b' is false (in this case 'b' is false)
                if(a && !b) {        // If 'a' is true and 'b' is false
                    std::cout << "what a mess" << std::endl;
                }
            }
        }
    }
    
    return 0;
}
