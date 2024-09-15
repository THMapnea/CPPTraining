#include<iostream>



//raw pointers in c++ holds a certain memory address they are usually used for dynamic typing 

int main(){
	
	//we first declare a new pointer of type int that is saved in the heap memory
	//we always need to remember to deallocate the memory used after we finished using it
	int *ptr = new int;
	std::cout<<"the memory space created contains: "<<*ptr<<std::endl;
	//let's assign a value to the allocated memory space
	*ptr = 2;
	std::cout<<"the memory space created contains: "<<*ptr<<std::endl;
	
	//once we used the value for our operation we can dealloocate the memory space you can see how again the memory pointed is empty
	delete ptr;
	std::cout<<"the memory space created contains: "<<*ptr<<std::endl;
	
	
	return 0;
}