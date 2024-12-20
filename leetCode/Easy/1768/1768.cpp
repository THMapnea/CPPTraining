#include<iostream>




class Solution1 {
public:
    // Function to merge two strings alternately
    string mergeAlternately(string word1, string word2) {
        // Initialize an empty result string to hold the final merged string
        std::string result;
        
        // Two pointers to keep track of the current index in word1 and word2
        int j = 0;  // Pointer for word1
        int k = 0;  // Pointer for word2

        // Iterate through the total length of both words, alternating characters
        for (int i = 0; i < 2 * (word1.size() + word2.size()); i++) {
            // If the index 'i' is even and we still have characters left in word1, 
            // append a character from word1 to result
            if (i % 2 == 0 && j != word1.size()) {
                result.push_back(word1[j]); // Append character from word1
                j++; // Move the pointer for word1 to the next character
            } 
            // If the index 'i' is odd and we still have characters left in word2, 
            // append a character from word2 to result
            else if (i % 2 != 0 && k != word2.size()) {
                result.push_back(word2[k]); // Append character from word2
                k++; // Move the pointer for word2 to the next character
            }
        }
        
        // Return the final merged string
        return result;
    }
};


class Solution2 {
public:
    // Function to merge two strings alternately
    string mergeAlternately(string word1, string word2) {
        // Initialize two pointers to track the current index for word1 and word2
        int i = 0, j = 0;
        
        // Initialize an empty result string to store the merged result
        string result = "";
        
        // Continue merging until all characters from either word1 or word2 are consumed
        while (i < word1.size() || j < word2.size()) {
            // If there are remaining characters in word1, append the next character to result
            if (i < word1.size()) {
                result += word1[i++]; // Append character from word1 and move pointer i forward
            }
            
            // If there are remaining characters in word2, append the next character to result
            if (j < word2.size()) {
                result += word2[j++]; // Append character from word2 and move pointer j forward
            }
        }
        
        // Return the final merged string
        return result;
    }
};
