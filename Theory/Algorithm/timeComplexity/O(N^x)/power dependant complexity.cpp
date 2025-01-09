#include<iostream>
#include<math.h>



//we can see an example of complexity of O(N^x) by creating a nested loop where it's iteration
//are dependent by a power
int main(){
	//initialize the number of executions
	int n = 100;
	
	//initialize the counter
	int c = 0;
	
	//create the nested loop
	for(int i = 0; i < n; i++){
		//vary the number of iteration
		for(int j = 0; j < sqrt(n); j++){
			c++;
		}
	}
	
	
	//show the result and the complexity
	std::cout<<"this algorithm runs wit a complexity of O(N^(3/2)) and execute: "<<c<<" operation";
	
	
	
	return 0;
}