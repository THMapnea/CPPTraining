#include<iostream>


//prototype
int factorial(int n);


//we can also use recursion to obtain a time complexity of O(N) for example in the factorial problem
int main(){
	//define the number of which we want the factorial
	int f = 5;
	
	//show the result and complexity
	std::cout<<"the factorial recursive operation runs with time complexity of O(N) and the factorial of "<<f<<" is: "<<factorial(f)<<std::endl;
	std::cout<<"the algorithm has run "<<f<<" times";
	
	
	return 0;
}

//function that implements the factorial 
int factorial(int n){
	//terminating condition
	if(n <= 1){
		return 1;
	}
	//recursive body
	return n * factorial(n - 1);
}