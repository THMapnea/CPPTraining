#include <iostream>



//PROBLEM
//Ask the user to insert a integer number and chek if the input is correct





int main() {
    int input;
    double temp; // Variable to check if user entered a double or float
    bool validInput = false;

    do {
        std::cout << "Insert an integer number: ";
        std::cin >> temp;

        // Check if the input is an integer
        if (std::cin.fail() || (temp != static_cast<int>(temp))) {
            std::cin.clear(); // Clear the fail state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the invalid input
            std::cout << "Invalid input. Please enter an integer." << std::endl;
        } else {
            input = static_cast<int>(temp); // Safe to cast to integer
            validInput = true;
        }
    } while (!validInput);

    std::cout << "You entered the integer: " << input << std::endl;

    return 0;
}