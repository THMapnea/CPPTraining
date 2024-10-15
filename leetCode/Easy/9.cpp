#include<iostream>

class Solution {
	public:
	    // Function to determine if the given integer x is a palindrome
	    bool isPalindrome(int x) {
	        // A negative number is not a palindrome
	        if (x < 0) {
	            return false;
	        }
	
	        // Store the original number for later comparison
	        long int original_number = x;
	        long int reversed_number = 0;
	
	        // Reverse the digits of the number
	        while (x != 0) {
	            // Append the last digit of x to reversed_number
	            reversed_number = reversed_number * 10 + x % 10; 
	            // Remove the last digit from x
	            x /= 10; 
	        }
	
	        // Check if the original number and the reversed number are the same
	        return original_number == reversed_number;
	    }
};
