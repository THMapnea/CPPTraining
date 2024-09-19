#include<iostream>






//prototype
void show(int number);
void show(char character);
void show(float floating_point_number);



int main(){
	int n = 1;
	char c = 's';
	float f = 3.14;
	//now with the same name we can pass different argument and get a different response based on the argument
	show(n);
	show(f);
	show(c);
	
	
	
	return 0;
}
//sometimes we need our function to do something specifical depending on the parameter passed but we dont want to 
//take care of every case in a single block we can overlod that function
//we basically define the same function name for different use cases

void show(int number){
	std::cout<<number<<" is a number"<<std::endl;
}

void show(char character){
	std::cout<<character<<" is a character"<<std::endl;
}

void show(float floating_point_number){
	std::cout<<floating_point_number<<" is a floating pooint number"<<std::endl;
}