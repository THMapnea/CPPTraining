#include<iostream>


//declaring the function prototype, this can be avoided if we declare the function before using it
int sum(int a , int b);

int main(){
	int x = 2;
	int y = 1;
	//calling the function
	int result = sum(x, y);
	std::cout<<result<<std::endl;
	
	//we can oviously use the function in other context like down here
	std::cout<<"the result is: "<<sum(x,y)<<std::endl;
	

	return 0;
}


//declaration of the function with it's parameters and return type
//the parameters are independent frome the one in the code and are mock variable 
//the actual value is passed to the function when you call it
int sum(int a, int b){
	return a + b;
}
