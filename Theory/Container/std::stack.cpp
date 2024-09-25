#include<iostream>
#include<stack>

//if you studied some DSA you might be familiar with the stack structure that is a LIFO structure
//that means that the first element is the last one to be taken out and to access it is necessary
//to pop out all the other values just like a tower of dishes




int main(){
	//we declare our stack referring to the std::stack object and telling it the type of value we want to store
	std::stack<int> my_stack;
	
	//to add to the stack we can call push()
	my_stack.push(1);
	my_stack.push(2);
	
	//to get the top element we can call .top()
	std::cout<<"the element on top of the stack is: "<<my_stack.top()<<std::endl;
	
	//to remove an element we call .pop()
	my_stack.pop();
	std::cout<<"the element on top of the stack is: "<<my_stack.top()<<std::endl;
	
	//we can also check the size 
	std::cout<<"the size of the stack is: "<<my_stack.size()<<std::endl;
	
	//or we can check if it is empty
	if(my_stack.empty()){
		std::cout<<"the stack is empty"<<std::endl;
	}else{
		std::cout<<"the stack is not empty"<<std::endl;
	}
	

	
	return 0;
}
