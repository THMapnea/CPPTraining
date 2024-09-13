#include<iostream>


//sometimes when we develop in c and c++ we define complex data structures that requires a lot of identifier
//to ease the problem we can define new type of data and use them just like we do for exmple with int,float ecc 
//but we also need to remember that those new data still needs to respect the parent definition
//this is more of a c feature since in C++ when we use structure or so the compiler does it for us


typedef enum confused_bool {FALSE, TRUE,MAYBE}; 

typedef struct {
	int r;
	int h;
}Pair;


int main(){
	
	confused_bool x = MAYBE;
	std::cout<<x<<std::endl;
	Pair p;
	p.h = 1;
	p.r = 2;
	
	
	
	return 0;
}