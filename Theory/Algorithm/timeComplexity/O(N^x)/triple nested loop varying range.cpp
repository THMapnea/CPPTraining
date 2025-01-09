#include<iostream>




//we can see an example of complexiti of O(N^3) by creating a triple nested loop with varying range
int main(){
	//initialize the number of executions
	int n = 100;
	
	//initialize the counter
	int c = 0;
	
	//create the triple nested loop with range that depends on each other
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			for(int k = j + 1; k < n; k++){
				c++;
			}
		}
	}
	
	
	//show the result and the complexity
	std::cout<<"this algorithm runs wit a complexity of O(N^3) and execute: "<<c<<" operation";
	
	
	
	return 0;
}