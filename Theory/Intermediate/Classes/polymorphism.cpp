#include<iostream>



//data
class Animal{
	public:
		//the virtual keyword allows for overriding of the function
		virtual void makeSound(){
			std::cout<<"SOUND FX"<<std::endl;
		}
};


//we can define child classes that can override and modify the parent class based on their necessity
class Duck : public Animal{
	public:
		void makeSound() override{
			std::cout<<"quack quack"<<std::endl;
		}
};

class Crocodile : public Animal{
	public:
		void makeSound() override{
			std::cout<<"nobody knows"<<std::endl;
		}
};


int main(){
	Duck my_duck;
	Crocodile my_crocodile;
	//we have called the same function name but it behaved differently depending on the class
	my_duck.makeSound();
	my_crocodile.makeSound();
	
	
	
	return 0;
}