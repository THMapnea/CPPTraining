#include<iostream>




//we can see an example of complexity of O(N^2) by making consecutive loops
//therefore the complexity will be the worst case of the worst time loop,
//this is because we would have O(n^2) + O(N^2) = O(N^2)
int main(){
	//initialize the number of executions
	int n = 100;
	
	//initialize the counter
	int c = 0;
	
	//create the  first nested loop
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			c++;
		}
	}
	
	//create the second nested loop
	for(int r = 0; r < n; r++){
		for(int l = 0; l < n; l++){
			c++;
		}
	}
	
	
	//show the result and the complexity
	std::cout<<"this algorithm runs wit a complexity of O(N^2) and execute: "<<c<<" operation";
	
	
	
	return 0;
}