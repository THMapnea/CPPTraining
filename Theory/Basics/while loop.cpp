#include<iostream>







int main(){
	int x = 0;
	//while loops iterate until the starting condition is true
	//the for loop is basically a while loop already packaged by c++
	while(x < 3){
		std::cout<<"iteration number: "<<x++<<std::endl; //here I also increment to avoid getting an infinite loop
	}
	
	//I could have also wrote the while like this so it resembled even more my for loop 
	int i = -1;
	while(++i < 3){
		std::cout<<"iteration for loop number: "<<i<<std::endl;
	}

	return 0;
}