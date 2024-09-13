#include<iostream>

//we are maybe at the most complex topic for the basics of c++ the pointers




//data
int x = 10;

//before continuing to read remember about the (&) reference operator and the (*) dereference operator and keep in mind that in the moment of declaration
//of a pointer (*) is not a dereference operator

int main(){
	//we declare a pointer of int type that means that the variable pointed is of the int type
	int *p; 
	
	//we assign to the pointer the address of the variable we want to point
	p = &x;
	
	//so p contains the address and *p means tell me the value that we can find at the address stored in p
	std::cout<<"the address of the x variable is: "<<p<<" and the value pointed is: "<<*p<<std::endl; 
	
	//trough the pointer we can also access that area of memory to perform operations like switching variables ecc
	*p = 8,
	
	//as you will se now the address is the same but the value stored has been modified
	std::cout<<"the address of the x variable is: "<<p<<" and the value pointed is: "<<*p<<std::endl; 
	
	//we can also move ourself between address incrementing or decrementing pointers p++ means p = p + 1 
	//so if for example p = 2000 then p++ = 2001 referrin to address and not variable
	std::cout<<"the next memory address is: "<<p++<<std::endl;
	return 0;
}
