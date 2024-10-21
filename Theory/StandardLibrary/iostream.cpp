#include <iostream>  // Include iostream for input/output operations

int main() {
    // Variable to store the user's input (expecting an integer)
    int x;

    // Prompt the user to insert a number (using std::cout)
    std::cout << "Insert a number: ";
    std::cin >> x;

    // Log the fact that input is being processed (using std::clog)
    std::clog << "[INFO] User has been prompted to insert a number." << std::endl;

    // Check if the input fails (i.e., user did not enter a valid integer)
    if (std::cin.fail()) {
        std::string c;  // Variable to store incorrect input as a string

        // Output error message (using std::cerr for error)
        std::cerr << "[ERROR] Invalid input: not an integer!" << std::endl;

        // Clear the error state so std::cin can be used again
        std::cin.clear();

        // Ignore incorrect input in the buffer
        std::cin.ignore(1000, '\n');  // Discard up to 1000 characters or until a newline

        // Accept the next input (treat it as a string to handle incorrect input)
        std::cin >> c;

        // Output what was inserted incorrectly (using std::cout)
        std::cout << "You inserted: " << c << " instead of a number." << std::endl;

        // Log that the incorrect input has been handled (using std::clog)
        std::clog << "[INFO] Handled incorrect input from the user." << std::endl;
    } else {
        // If input is valid, acknowledge it (using std::cout)
        std::cout << "You inserted the number: " << x << std::endl;

        // Log the successful input (using std::clog)
        std::clog << "[INFO] User inserted a valid number: " << x << std::endl;
    }

    return 0;  // End of the program
}
