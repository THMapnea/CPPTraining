#include<iostream>




//we can define global variable like this outside of any class/struct/funtion ecc
//this variable can be accessed anywhere int he codebase
int global_var = 10;

struct wrapper{
	//this variable is accessible only referencing the struct
	int struct_variable = 23;
};


//sometimes it can be useful to have a namespace in wich we store variables classes ecc
namespace my_namespace {
	int my_namespace_var = 12;
}






int main(){
	
	//we can define a scoped variable like this in a function like this
	//this variabl ecan be accessed only in this function
	int function_var = 20;
	
	//to access the namespace variable we do the same thing that we did with the std::function
	//you can see how we are grabbing function and values from two different namespace
	std::cout<<my_namespace::my_namespace_var<<std::endl;
	
	
	return 0;
}