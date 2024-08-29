#include<iostream>



//A lot of this data willbe later explained troughly this is just a brief recap


int main(){
	//derived data
	
	// arrays are a data type that stores multiple single values, their dimension is determined
	//every item of the array is stored in consecutive data spaces
	//the index of the array is the place in order where it is stored the single data the count starts from 0
	int array[5] = {1,2,3,4,5};
	std::cout<<"the first element is: "<<array[0]<<std::endl;
	
	//pointers they basically point to the memory address of a variable, again they will be explained better in other file
	int value = 69;
	int *pt = &value;
	std::cout<<"the address of the variable is:"<<pt<<std::endl;
	
	//you can also operate by reference basically this two variable share the same memory space
	int& ref = value; 
	std::cout<<"we are referencing value as: "<<ref<<std::endl;
	value = 96;
	std::cout<<"the modified value trough reference is: "<<value<<" and the value in the reference is the same: "<<ref<<std::endl;
	
	//arrays of char are called string and can be found in the std namespace like this
	//this implementation is similar to creating an array of char like we do in c but we can avoid to specify a dimension
	//char string[50]; this is the same as calling the string from std but it has a defined dimension tjhat can be better or worst depending on the situation
	std::string phrase = "hello quantum world";
	std::cout<<phrase<<std::endl;
	
	//the other data type will be  will be covered for sure in other files since they are more complex and need to be introduced properly
	
	return 0;
}