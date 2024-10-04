#include <iostream>
#include <stack>

// Input data containing the string of brackets
std::string data = {"[[[((([{}])))]]]"}; // Example string to be checked

// Function prototype
bool solution(std::string s);

int main() {
    // Check if the brackets in the input data are correctly balanced
    if (solution(data)) {
        std::cout << "Correct brackets";
    } else {
        std::cout << "Wrong brackets closure or order";
    }
    
    return 0;
}

// Function to check if the brackets in the given string are balanced
bool solution(std::string s) {
    // Create a stack to hold the opening brackets
    std::stack<char> mp;

    // Iterate over each character in the string
    for (int i = 0; i < s.size(); i++) {
        // If the character is an opening bracket, push it onto the stack
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            mp.push(s[i]);
        } else {
            // If the stack is empty, there is no matching opening bracket
            if (mp.empty()) {
                return false; // Unmatched closing bracket
            }
            
            // Check if the current closing bracket matches the top of the stack
            if ((s[i] == ')' && mp.top() == '(') ||
                (s[i] == ']' && mp.top() == '[') ||
                (s[i] == '}' && mp.top() == '{')) {
                mp.pop(); // Match found, pop the opening bracket
            } else {
                return false; // Mismatched brackets
            }
        }
    }

    // If the stack is empty at the end, all brackets are balanced
    return mp.empty();
}
