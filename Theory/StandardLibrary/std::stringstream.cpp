#include <iostream>
#include <sstream>

int main() {
    // Ask the user to insert a number
    long int x;
    std::cout << "Insert a long number: ";
    std::cin >> x;

    // We want to treat that number as a string using stringstream
    std::stringstream sso;

    // Use the stream operator (<<) to insert the value into the stream
    sso << x;

    // Create a variable to hold the string representation of the number
    std::string my_stringed_number;
    sso >> my_stringed_number;

    // Now we process the number as a string and print each digit
    std::cout << "The digits of the number are:" << std::endl;
    for (int i = 0; i < my_stringed_number.size(); i++) {
        std::cout << my_stringed_number[i] << std::endl;
    }

    // We can also do the opposite: convert a string back to a number
    std::string my_string = "123";
    std::stringstream sso2;

    // Insert the string into the stringstream
    sso2 << my_string;

    int my_number;

    // Extract the integer from the stringstream
    sso2 >> my_number;

    // Increment the number and display the result
    std::cout << "The incremented number is: " << ++my_number << std::endl;

    return 0;
}
