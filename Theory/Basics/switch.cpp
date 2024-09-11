#include<iostream>



//sometimes in videogame we need to choose between four direction and depending on the key pressed we have an output
//implementing everything by using if - else statement can be a little not optimized
//the switch statement allows us to decide between constant values


int main(){
	int x;
	std::cout<<"press a number between 0 and 3 ";
	std::cin>>x;
	switch(x){
		case 0:
			std::cout<<"you pressed 0"<<std::endl;
			break; //this line is important because it tells the compiler when the block of action of the case has been finished
			      //if you dont put this it will go to chek the next case
	    case 1:
			std::cout<<"you pressed 1"<<std::endl;
			break;
		case 2:
			std::cout<<"you pressed 2"<<std::endl;
			break;
	    case 3:
			std::cout<<"you pressed 3"<<std::endl;
			break;
		//the default handles all the not included cases
		default:
			std::cout<<"you pressed any other key or key combination"<<std::endl;
	}
	
	
	
	
	
	
	
	
	return 0;
}