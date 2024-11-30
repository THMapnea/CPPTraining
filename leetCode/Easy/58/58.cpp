#include<iostream>
#include<vector>



class Solution {
public:
    int lengthOfLastWord(string s) {
        // Vector to store the characters of the last word
        std::vector<char> final_word;
        // Counter for trailing spaces (if necessary)
        int j = 0;

        // Traverse the string from the end to the beginning
        for(int i = s.size() - 1; i > -1; i--){
            // If the current character is not a space, add it to the final_word vector
            if(s[i] != ' '){
                final_word.push_back(s[i]);
            }
            // If the current character is a space and we already started collecting a word,
            // return the size of the collected word
            else if((s[i] == ' ') && !final_word.empty()){
                return final_word.size();
            }
            // If the current character is a space and we haven't started collecting a word,
            // increment the trailing space counter
            else{
                j++;
            }
        }

        // If no complete word was found, return the length of the string minus trailing spaces
        return s.size() - j;
    }
};
