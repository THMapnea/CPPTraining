#include<iostream>




//we will se an example of a nested loop that however run with O(N) complexity
//this happens because it is a geometric progression with increment and we would have an outer loop 
//that runs with complexity log_2(N) and the outer loop runs with a progression as 1,2,4...,N therefore we have N
//by summing in a geometric serie  
int main(){
	
	//initialize the number of executions
	int n = 100;
	
	//initialize the counter
	int c = 0;
	
	//create the nested loop
	for(int i = 1; i <= n; i*=2){
		for(int j = 0; j <= i; j++){
			//increment the counter
			c++;
		}
	}
	
	//show the result and the complexity
	std::cout<<"this algorithm runs wit a complexity of O(N) and execute: "<<c<<" operation";
	
	
	
	
	
	
	
	return 0;
}