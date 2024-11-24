#include<iostream>









int main(){
	
	//let's imagine that we want to insert a check on our program to grab the error that
	//may be caused by the user and handle the error during the execution we can use the try and catch statement
	//we first initialize the try block in wich we handle the various operation
	try{
		int limit = 20;
		int x;
		std::cout<<"insert a number less than 20"<<std::endl;
		std::cin>>x;
		if(x < limit){
			std::cout<<"number less than 20";
		}else{
			//if we recognize an error we throw it to the catch block to handle it
			throw(x);
		}
	//here we will handle what to do in case of erro
	}catch(int x){
		std::cout<<"the number "<<x<<" is higher than 20"<<std::endl;;
	}
	
	//sometimes we dont know what type of error we will be handling
	//in c++ we can use ... to solve this issue
	try {
		  int pageindex = 12;
		  if (pageindex == 1) {
		    std::cout<<"correct index";
		  } else {
		    throw 404;
		  }
		}
	catch (...) {
	  std::cout<<"generic error";
	}
		
	
	
	return 0;
}
