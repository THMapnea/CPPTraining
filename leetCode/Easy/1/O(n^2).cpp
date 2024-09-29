#include<iostream>
#include<vector>

// Data: We have a vector of integers and a target value.
std::vector<int> nums = {1, 2, 3, 4, 23, 2, 3, 42, 33, 2};
int target = 35;

// Function prototype for finding two indices whose values sum to the target.
std::vector<int> solution(std::vector<int>& nums, int target);

int main(){
    // Calling the solution function and printing the indices of the two numbers that sum to the target.
    std::cout << solution(nums, target).at(0) << "," << solution(nums, target).at(1) << std::endl;

    return 0;
}

// This function finds two indices in the input vector whose values sum up to the target value.
std::vector<int> solution(std::vector<int>& nums, int target) {
    // Vector to hold the result (indices of two numbers that sum to the target).
    std::vector<int> result;

    // Loop through each element in the vector.
    for (int i = 0; i < nums.size(); i++) {
        // Inner loop starts from the next element to avoid repetition.
        for (int j = 0; j < nums.size(); j++) {
            // Check if the sum of nums[i] and nums[j] equals the target, and ensure i and j are not the same.
            if ((nums[i] + nums[j]) == target && i != j) {
                // If found, store the indices in the result vector.
                result.push_back(i);
                result.push_back(j);
                // Return the result as soon as we find the solution.
                return result;
            }
        }
    }
    
    // If no pair is found (though in this case it always finds a pair), return the empty result vector.
    return result;
}
