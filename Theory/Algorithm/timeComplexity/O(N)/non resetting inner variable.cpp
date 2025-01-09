#include<iostream>






//we will see another example of nested loop that runs in O(N) time complexity
//particulary it is a nested loop with non resetting inner variable therefore the
//internal loop it is only run once giving us O(N) instead that  O(N^2)
int main(){
		//initialize the number of executions
	int n = 100;
	
	//initialize the counter
	int c = 0;
	
	//initialize the non resetting variable
	int j = 0;
	
	//create the nested loop
	for(int i = 0; i < n; i++){
		//here we are not resetting the variable
		for(;j < n; j++){
			c++;
		}
	}
	
	
	//show the result and the complexity
	std::cout<<"this algorithm runs wit a complexity of O(N) and execute: "<<c<<" operation";
	
	
	return 0; 
}