#include<iostream>


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    	
    	//loop trough the array
        for(int i = 0; i < nums.size(); i++){
        	
        	//if target found return it's index
            if(nums[i] == target){
                return i;
            }else if(nums[i] > target){
            	//otherwise if it is less return it's position - the difference between the size and the index
                return nums.size()-(nums.size() - i);
            }else if (i == nums.size() - 1){
            	//if it's higher than all the other it is for sure at index + 1
                return i + 1;
            }
        }
        return -1; // eventual error
    }
};