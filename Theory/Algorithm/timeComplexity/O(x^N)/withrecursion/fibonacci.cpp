#include<iostream>


//prototype
int fibonacci(int n);



//another example of algorithm with recursion that runs with time complexity of O(2^N)
//is the fibonacci number this is not the most omptimal solution but for now it's okay
int main(){
	//set a number 
	int n = 10;
	
	//let's see the result
	std::cout<<"the fibonacci number of: "<<n<<" is: "<<fibonacci(n);
	
	
	
	return 0;
}


//implementation of the recursive function
int fibonacci(int n){
	//terminating condition
	if(n  < 2){
		return n;
	}
	
	//recursive call
	return fibonacci(n - 1) + fibonacci(n - 2);
	
	
}