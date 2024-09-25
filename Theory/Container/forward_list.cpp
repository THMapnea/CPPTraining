#include<iostream>
#include<forward_list>








int main(){
	//a forward list is a single linked list for fast insertion and access from anywhere
	std::forward_list<int> my_forward_list;
	
	//we can assign values to the list trough .assign(index,value)
	my_forward_list.assign(0,1);
	my_forward_list.assign(1,2);

	//we can access the front element using .front()
	std::cout<<"the front element is: "<<my_forward_list.front()<<std::endl;
	
	//as usual we can check if it is empty with .empty()
	if(my_forward_list.empty()){
		std::cout<<"the forward list is empty"<<std::endl;
	}else{
		std::cout<<"the forward list is not empty"<<std::endl;
	}
	
	//we can see how many element we can store with .max_size
	std::cout<<"the max size of the list is: "<<my_forward_list.max_size()<<std::endl;
	
	//we can clear it with .clear()
	my_forward_list.clear();
	
	//and much more operation 
	
	return 0;
}