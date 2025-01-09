#include<iostream>




//we can see an example of complexity of O(N^2) by creating a nested loop
int main(){
	//initialize the number of executions
	int n = 100;
	
	//initialize the counter
	int c = 0;
	
	//create the nested loop
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			c++;
		}
	}
	
	
	//show the result and the complexity
	std::cout<<"this algorithm runs wit a complexity of O(N^2) and execute: "<<c<<" operation";
	
	
	
	return 0;
}