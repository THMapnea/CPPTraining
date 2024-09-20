#include<iostream>



//we create a class with virtual functions
class Base{
	public:
		virtual void f1(){
			std::cout<<"base::function1"<<std::endl;
		}
		virtual void f2(){
			std::cout<<"base::function2"<<std::endl;
		}
};


//we create a child class with one of the previous function override and a normal one
class Derived : public Base{
	public:
		void f1() override{
			std::cout<<"derived::function1"<<std::endl;	
		}
		void f3(){
			std::cout<<"derived::function3"<<std::endl;
		}
};

int main(){
	
	//we can create  apointer to the base and assign it to a child class object
	Base* obj = new Derived();
	
	//as we can see we are able only to call the function of the base 
	//but with the second function being the one defined in the child class
	obj->f1();
	obj->f2();
	
	//we can now delete the object
	delete obj;
	
	//this happen sinec when we create an object the pointer to the object points to the virtual table containig the definition of the functions
	//that are then overridden and modyfied when the derived class is called
	
	return 0;
}