#include<iostream>




class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        // Variable to track the smallest absolute distance to zero
        int distance;
        // Variable to store the current closest number to zero
        int result = 0;
        // Variable to temporarily store the previous result for tie-breaking
        int previous_result = 0;

        // Iterate through all elements in the array
        for(int i = 0; i < nums.size(); i++){
            // Compute the absolute distance of the current number from zero
            int temp_distance = std::abs(nums[i]);

            // Initialize `distance` and `result` with the first element
            if(i == 0){
                distance = temp_distance;
                result = nums[0];
            }

            // Check if the current number is closer to zero or equally close
            if(distance >= temp_distance){
                // Save the current result for potential tie-breaking
                previous_result = result;
                // Update the distance and the result to the current number
                distance = temp_distance;
                result = nums[i];

                // Tie-breaking: Prefer the larger number in case of equal absolute distances
                if(distance == temp_distance &&
                    previous_result > result &&
                    std::abs(previous_result) == std::abs(result)){
                    result = previous_result;
                }
            }
        }

        // Return the number closest to zero
        return result;
    }
};
