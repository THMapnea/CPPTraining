#include<iostream>




//data
class Animal{
	public:
		std::string name;
	public:
		void showName(){
			std::cout<<"the animal name is : "<<name<<std::endl;
		}
};

//once we create a class we can introduce the concept of inheritance  that simply means taking a class extending it and giving it new functions
//values ecc
class Duck : public Animal{
	public:
		void quack(){
			std::cout<<"quack quack"<<std::endl;
		}
};









int main(){
	Duck my_duck;
	
	//as you can see we can access the name property even if it is not explicitly declared in the duck class
	my_duck.name = "adolf";
	my_duck.showName();
	
	//and unlike animal we can make it quack
	my_duck.quack();
	
	
	
	
	return 0;
}