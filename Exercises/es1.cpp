#include<iostream>


//PROBLEM
//ask the user to insert a number if that number is not positive ask until the user
//insert a positive number




int main(){
	int x;
	
	do{
		std::cout<<"insert a positive number: ";
		std::cin>>x;
		//std::cin.fail is a built in function that checks if the input is the same as the declared variable type
		if(std::cin.fail()){
			std::cout<<"you didn't insert a number"<<std::endl;
			break;
		}
	}while(x < 0);
	
	
	return 0;
}