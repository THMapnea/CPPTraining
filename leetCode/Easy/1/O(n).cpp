#include<iostream>      // For input/output
#include<vector>        // To use std::vector
#include<unordered_map> // To use std::unordered_map, which stores key-value pairs for fast lookup

// Data: Declare and initialize a vector 'nums' containing a list of integers
std::vector<int> nums = {1, 2, 3, 4, 23, 46, 3, 42, 33, 2};

// Target value to find the pair of numbers that sum up to this target
int target = 35;

// Function prototype: solution function that returns a vector with the indices of the two numbers adding to 'target'
std::vector<int> solution(std::vector<int>& nums, int target);

int main(){
    // Call the solution function and print the indices of the two numbers that add up to 'target'
    // The .at() method is used to access elements at index 0 and 1 in the returned vector
    std::cout << solution(nums, target).at(0) << "," << solution(nums, target).at(1) << std::endl;
    
    return 0; // Return 0 to indicate successful program termination
}

// Function definition: solution
// This function takes a vector of integers 'nums' and an integer 'target'
// It returns a vector of two integers representing the indices of the two numbers in 'nums' that add up to 'target'
std::vector<int> solution(std::vector<int>& nums, int target) {
    // unordered_map to store the number and its index, where the key is the number and the value is its index in 'nums'
    std::unordered_map<int, int> pair_map;

    // Loop through the vector 'nums' to find a pair of numbers that add up to 'target'
    for(int i = 0; i < nums.size(); i++) {
        int num = nums[i]; // Current number in the vector

        // Check if the complement (target - num) exists in the map
        // If the complement is found, we have a pair that sums to 'target'
        if(pair_map.find(target - num) != pair_map.end()) {
            // Return a vector containing the index of the current number (i) and the index of the complement (pair_map[target - num])
            return {i, pair_map[target - num]};
        }

        // If the complement is not found, add the current number and its index to the map
        pair_map[num] = i;
    }

    // Return an empty vector if no such pair is found (this assumes the input guarantees a solution, so this case may not occur)
    return {};
}
