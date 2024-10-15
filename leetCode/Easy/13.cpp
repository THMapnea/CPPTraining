#include <iostream>
#include <string>
#include <map>

class Solution {
public:
    // Function to convert a Roman numeral string to an integer
    int romanToInt(std::string s) {
        int total = 0; // Variable to store the total integer value
        int temp; // Variable to temporarily hold the value for subtraction

        // Map to store the integer values of Roman numeral characters
        std::map<char, int> rules = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };

        // Iterate through each character in the string
        for (int i = 0; i < s.size(); i++) {
            // Check if the current character represents a value less than the next character
            if (i + 1 < s.size() && rules[s[i]] < rules[s[i + 1]]) {
                // If so, subtract the current value from the next value
                temp = rules[s[i + 1]] - rules[s[i]];
                total += temp; // Add the calculated value to total
                i++; // Skip the next character since it's already processed
            } else {
                // Otherwise, just add the value of the current character to total
                total += rules[s[i]];
            }
        }
        return total; // Return the total integer value
    }
};
