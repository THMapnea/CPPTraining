#include <iostream>

// Define the Solution class that contains the mySqrt function
class Solution {
public:
    // Function to compute the integer part of the square root of a number `x`
    int mySqrt(int x) {
        // Define the lower and upper bounds for binary search
        int l = 1;    // Lower bound starts at 1
        int r = x;    // Upper bound starts at `x`

        // Perform binary search
        while (l <= r) {
            // Calculate the midpoint in a way that avoids integer overflow
            long long int midpoint = l + (r - l) / 2;

            // Compute the square of the midpoint, using `long long` to prevent overflow
            long long int midpoint_squared = (long long)midpoint * midpoint;

            // If the square of the midpoint equals `x`, we've found the square root
            if (midpoint_squared == x) {
                return midpoint;
            }
            // If the square of the midpoint is less than `x`, move the lower bound up
            else if (midpoint_squared < x) {
                l = midpoint + 1;
            }
            // If the square of the midpoint is greater than `x`, move the upper bound down
            else {
                r = midpoint - 1;
            }
        }

        // Return `r` as the result, as it represents the floor of the square root
        return r;
    }
};