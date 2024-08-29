#include<iostream>






int main(){
	
	int i = 0; //initialize a counter
	
	//differently from the while the do while check the condition after the execution of the block
	//it can be useful if we want to verify a condition before incrementing a value 
	do{
		std::cout<<"iteration number: "<<i++<<std::endl;
	}while(i < 10);
	
	return 0;
}