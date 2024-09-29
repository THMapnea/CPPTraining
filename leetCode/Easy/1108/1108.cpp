#include<iostream>

// Data: We have an IP address string.
std::string address = "1.1.1.1";

// Prototype for the function that modifies the IP address.
std::string solution(std::string address);

int main() {
    // Call the solution function and print the result.
    std::cout << solution(address) << std::endl;

    return 0;
}

// This function takes an IP address and replaces each dot (.) with "[.]".
std::string solution(std::string address) {
    // Create a new string to hold the result.
    std::string result;
    
    // Loop through each character in the input IP address string.
    for (char c : address) {
        // If the character is a dot, append "[.]" to the result.
        if (c == '.') {
            result += "[.]";
        } 
        // Otherwise, append the character itself to the result.
        else {
            result += c;
        }
    }
    
    // Return the modified string with the replaced dots.
    return result;
}
