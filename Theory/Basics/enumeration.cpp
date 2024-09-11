#include<iostream>


//the enumeration gives us a way to store enumerated values with a name
//that means that each value is given a number from 0 -> infinity all integer
enum RGB {red,green,blue};

//the enumerator can also be defined by you for example here instead of starting with 0 we start with two
enum CPY {cyan = 2,purple,yellow};

//this is how you can implement boolean values in c for example you should also use typedef but we will see it later how it works
typedef enum BOOL {FALSE,TRUE};

//you can also implement other type of enumeration but those are more complex and less useful at the beginner level
int main(){
	//we first write the name of the enum then the variable name and in the end the coonstant value of our enumeration that we want to assign to it
	RGB r = red;
	CPY p = purple;
	std::cout<<"the number associated to the color is: "<<r<<" and the number associated to the other color is: "<<p<<std::endl;
	if(TRUE){
		std::cout<<"the value is true"<<std::endl;
	}
	if(!FALSE){
		std::cout<<"the value is false"<<std::endl;
	}
	
	
	return 0;
}