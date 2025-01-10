#include<iostream>



//prototype
int gcd(int m, int n);


//an example of recursive algorithm that runs with time complexity of O(log(n)) is the 
//greatest common divisor that run with time complexity of O(log(min(n,m)))
int main(){
	
	//lets see the result
	std::cout<<"the gcd is: "<<gcd(10,2);
	
	
	return 0;
}


//implementation of the recursive function
int gcd(int m, int n){
	//terminating condition
	if(n == 0){
		return m;
	}
	if(m == 0){
		return n;
	}
	
	//recursive call by changing the reminder
	return (gcd(n, m % n));
	
}