#include<iostream>




//we will see the complexity of a simple loop
int main(){
	//initialize the number of executions
	int n = 100;
	
	//initialize a counter variable
	int c = 0;
	
	//loop 
	for(int i = 0; i < n; i++){
		//increment the counter
		c++;
	}
	
	//show the result and the complexity
	std::cout<<"this algorithm runs wit a complexity of O(N) and execute: "<<c<<" operation";
	
	
	
	
	return 0;
}