#include<iostream>





int main(){
	//data
	int a = 1;
	int b = 2;
	int c = 3;
	//the auto keyword allows the compiler to deduce the type of variable for example given back by the lambda

	
	//empty lambda with no parameters, no return type and no capture list
	auto emptyLambda = [] () {
		std::cout<<"my empty lambda"<<std::endl;
	};
	
	//lambda that only uses parameters
	auto parameterLambda = [] (int x, int y) {
		std::cout<<x + y<<std::endl; 
	};
	
	//lamda that uses parameters and capture list the value of the capture list must be declared in the same scope
	auto captureListLambda = [c] (int x, int y) {
		std::cout<<c * x * y<<std::endl;
	};
	
	auto referenceLambda  = [&c] (int x) {
		c += x;
		std::cout<<c<<std::endl;
	};
		
	
	
	//call of the lambdas function
	emptyLambda();
	parameterLambda(a,b);
	captureListLambda(a,b); //as you can see we didn't need to pass the variable contained in the capture list to the lambda since the lambda takes it from it's scope
	referenceLambda(a); //since we are passing the capture list per reference it will be updated automatically
	return 0;
}
