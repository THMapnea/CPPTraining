#include<iostream>



//sometimes it can be useful to define morte complex data types that can also perform some action
//this is actually already possible in c by encapsulating function in structure but in c++ this approch is much more 
//precise and studied introducing the concept of the class that implements a specifier allowing to give access to the class only
//to a specific part of the code


//data
//let's say that we want to represent a user on our platform instead of defining a structure we can define a class
class User{
	//with the keyword public we allow any part or other class of the code to access it
	public:
		std::string user_name;
		std::string user_email;
	
	//private parameters can only be accessed by the same class or their friends
	private:
		std::string user_password;
		
	//protected attributes can only be accessed by same classes derived classes and friends
	protected:
		std::string friends[100];
	
	//we can also define function for our classes
	public:
		void show(int passed_value){
			std::cout<<"the email of the account number: "<<passed_value<<" is "<<user_email<<" and the account associated is: "<<user_name<<std::endl;
		}
	
};







int main(){
	//creating a new class consist in instancing teh class/object
	User user_1;
	
	//then from here just like we did with the struct we can initialize it's value
	user_1.user_name = "pino69";
	user_1.user_email = "pinocalamarino@gmail.com";
	user_1.show(12);
	
	//as you can see we cannot access private or protected members of the function later we will see how to handle that part of the class
	
	
	
	
	return 0;
}