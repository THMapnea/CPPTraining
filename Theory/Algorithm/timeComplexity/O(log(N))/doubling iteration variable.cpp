#include<iostream>



//if we want to see an example of time complexity of O(log(N)) we can double the iteration variable
int main(){
	//initialize the number of executions
	int n = 100;
	
	//initialize the counter
	int c = 0;
	
	//create the loop and double the variable instead of just adding 1
	for(int i = 1; i < n; i*=2){
		c++;
	}
	
	//show the result and the complexity
	std::cout<<"this algorithm runs wit a complexity of O(log(N)) and execute: "<<c<<" operation";
	
	
	return 0;
}