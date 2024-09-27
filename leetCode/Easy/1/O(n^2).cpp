#include<iostream>
#include<vector>



//data
std::vector<int> nums = {1,2,3,4,23,2,3,42,33,2};
int target = 35;

//prototype
std::vector<int> solution(std::vector<int>& nums, int target);

int main(){
	
	
	std::cout<<solution(nums,target).at(0)<<","<<solution(nums,target).at(1)<<std::endl;
	
	
	
	return 0;
}


std::vector<int> solution(std::vector<int>& nums, int target){
	//variable to hold the result
    std::vector<int> result;
    //double loop to search for the sum
    for(int i = 0; i < nums.size(); i++){
        for(int j = 0; j <nums.size() - 1; j++){
            if((nums[i] + nums[j]) == target && i != j){
            	//save and return when found
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    return result;
}
