#include<iostream>



bool a = true;
bool b = false;
int c = 100;




int main(){
	//to check for conditions we can use the if - else object
	//for example if we want to see if one value is bigger than other we can do
	if(c > 10){
		std::cout<<"the number is bigger"<<std::endl;
    }else{
    	std::cout<<"the number is smaller"<<std::endl;
	}
	
	//we can also concatenate if else
	if(c > 1000){
		std::cout<<"the number c is humongus"<<std::endl;	
	}else if(c > 10){
		std::cout<<"the number c is very big"<<std::endl;
	}
	
	
	//this is the same as writing if(a == true)
	if(a){
		std::cout<<" a is true"<<std::endl;
	}
	if(!b){
		std::cout<<" b is false"<<std::endl;
	}
	
	//even tough it'is not always a good practice you can nest if else statement
	//but it's better to work around some boolean algebra to reduce this type of configuration that are prone to errors
	if(a){
		if(!b){
			if(!a || !b){
				if(a && !b){
					std::cout<<"what a mess"<<std::endl;
				}
			}
		}
	}
	
	
	
	return 0;
}