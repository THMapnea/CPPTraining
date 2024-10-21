#include<iostream>


//PROBLEM
//ask the user to insert a number if that number is not positive ask until the user
//insert a positive number




int main() {
    int x;

    do {
        std::cout << "Insert a positive number: ";
        std::cin >> x;

        // Check if the input is invalid (e.g., not a number)
        if (std::cin.fail()) {
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(10000, '\n'); // Ignore invalid input
            std::cout << "You didn't insert a valid number. Please try again." << std::endl;
        }
        else if (x < 0) {
            std::cout << "Please insert a positive number." << std::endl;
        }
    } while (x < 0);

    std::cout << "You entered a valid positive number: " << x << std::endl;

    return 0;
}
