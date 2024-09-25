#include<iostream>

// 'iostream' stands for "input-output stream" and provides functionalities to handle input and output in C++.
// 'std::cin' is used for input, while 'std::cout' is used for output.

int main() {
    int x;  // Declare an integer variable 'x' that will store the user input.

    // Output message to prompt the user for input.
    // 'std::cout' is the standard output stream and is used to print text to the console.
    std::cout << "Insert an integer: " << std::endl;

    // 'std::cin' is the standard input stream, used to take input from the keyboard (terminal).
    // The input is stored in the variable 'x'. The input is taken as a number (because 'x' is an integer).
    std::cin >> x;

    // Output the value entered by the user.
    // 'std::cout' is used again here to print the result along with a message.
    std::cout << "The number is: " << x << std::endl;

    return 0;
}
