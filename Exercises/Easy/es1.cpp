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
            std::cout << "You didn't insert a number." << std::endl;
            break;
        }
    } while (x < 0);

    std::cout << "You entered a valid positive number: " << x << std::endl;

    return 0;
}
