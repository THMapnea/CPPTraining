#include<iostream>


int main(){
	//the for loop is defined with an int variable that holds the iteration number,
	//a exit condition that when set to false breaks from the cycle 
	//and a increment
	for(int i = 0; i < 3; i++){
		std::cout<<"iteration incremented number: "<<i<<std::endl;
	}
	
	//you can also use a decrement if necessary as it follows let's rewrite the for loop
	for(int i = 10; i > 3; i--){
		std::cout<<"iteration decremented number: "<<i<<std::endl;
	}
	
	//keep in mind that there are multiple syntaxs to write the for loop like this one
	for(int i = 0; i < 3;i++)
		std::cout<<"iteration no brackets number: "<<i<<std::endl;
		
		
	//you can also declare multiple iterator in the for loop
	for(int i = 0, p = 2; i < 3; i++, p--){
		std::cout<<"iteration multiple number i:"<<i<<" and p: "<<p<<std::endl;
	}
	
	//you can also use different increment like +2, *2 
	for (int i = 0; i < 6; i+=2){
		std::cout<<"iteration with different increment number: "<<i<<std::endl;
	}
	
	//there are other more complex way to declare a for loop like using auto iterator on a vector(library)
	//or by using expression it all depends on your necessity and writing style
	return 0;
}