#include<iostream>
#include<vector>

//To solve this LeetCode I used the XOR properties
//that tells me that a number XOR with himself is 0 so when all the number we 
//loop trough XOR with the other we get back the only one wo didnt'have a pair
//since the xor operation is used for single digit summary
//this method is: 
//				TC O(N),
//				SC O(1)

//here is a walktrough of what happens
// i = 0, ans ^= 1 ? ans = 1 (0 ^ 1 = 1)
// i = 1, ans ^= 2 ? ans = 3 (1 ^ 2 = 3)
// i = 2, ans ^= 2 ? ans = 1 (3 ^ 2 = 1, because 2 ^ 2 = 0 cancels out)
// i = 3, ans ^= 3 ? ans = 2 (1 ^ 3 = 2)
// i = 4, ans ^= 4 ? ans = 6 (2 ^ 4 = 6)
// i = 5, ans ^= 3 ? ans = 5 (6 ^ 3 = 5)
// i = 6, ans ^= 4 ? ans = 1 (5 ^ 4 = 1, because 4 ^ 4 = 0 cancels out)
// i = 7, ans ^= 5 ? ans = 4 (1 ^ 5 = 4)
// i = 8, ans ^= 6 ? ans = 2 (4 ^ 6 = 2)
// i = 9, ans ^= 7 ? ans = 5 (2 ^ 7 = 5)
// i = 10, ans ^= 8 ? ans = 13 (5 ^ 8 = 13)
// i = 11, ans ^= 8 ? ans = 5 (13 ^ 8 = 5, because 8 ^ 8 = 0 cancels out)
// i = 12, ans ^= 7 ? ans = 2 (5 ^ 7 = 2)
// i = 13, ans ^= 6 ? ans = 4 (2 ^ 6 = 4)
// i = 14, ans ^= 5 ? ans = 1 (4 ^ 5 = 1)

// At the end, only the number 1 remains as the answer.




//data
std::vector<int> numbers = {1,2,2,3,4,3,4,5,6,7,8,8,7,6,5};

//prototype
int solution(std::vector<int>& nums);



int main(){
	//call the function to check if went correctly
	std::cout<<solution(numbers)<<std::endl;
	
	return 0;  
}


//solution function
int solution(std::vector<int>& nums){
	//we use a variable to hold the answer value
	int ans = 0;
	//we loop trough all the array
    for(int i = 0; i < nums.size(); i++){
    	//we use the XOR gate properties
        ans ^= nums[i];
    }
    return ans;
} 

