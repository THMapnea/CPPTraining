#include<iostream>


//data
//every data stored in an array is stored at the next memory address for example in the case of the int array
//every value is stored one next to another like this 3000,3004,3008 basically one sizeof(type) from the other
int my_array[5] = {0,1,2,3,4}; 
int my_empty_array[5];



//prototype
void multiply(int *my_array);

int main(){
	
	for(int i = 0; i < 5; i++){
		//we can use the pointer arythmetic to move trough our array
		//by incrementing the address in the brackets and dereferencing it
		*(my_empty_array + i) = i;
	}
	
	for(int i = 0; i < 5; i++){
		std::cout<<my_empty_array[i]<<std::endl;;
	}
	
	multiply(my_array);
	
	return 0;
}

//this can be pretty useful in c a little bit less in c++ but you can pass an array to a function using the pointers 
//the syntax below is the same as doing int my_array[]
void multiply(int *my_array){
	for(int i = 0; i < 5; i++){
		*(my_array + i) *= i;
		//I used the pointer notation just to repeat it you can use also the classical with no problem
		std::cout<<(*(my_array + i))<<std::endl;
	}
}