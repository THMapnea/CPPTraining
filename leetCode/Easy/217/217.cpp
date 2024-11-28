#include<iostream>


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Create an unordered set to store unique elements from the input array
        std::unordered_set<int> num_set;

        // Iterate through each number in the input vector
        for(const auto& num : nums){
            // Check if the current number is already in the set
            if(num_set.contains(num)){
                // If it is, we found a duplicate, so return true
                return true;
            } else {
                // Otherwise, add the current number to the set
                num_set.insert(num);
            }
        }

        // If no duplicates were found during the loop, return false
        return false;
    }
};
