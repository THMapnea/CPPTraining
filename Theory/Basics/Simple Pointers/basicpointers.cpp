#include<iostream>



//data
int x = 10;
int a = 2;
int b;




int main(){
	//here we are declaring a pointer to an integer and assign it the address of the x variable
	//int htis case the (*) operator indicates a pointer type variable and (&) is the reference operator
	int *xpt = &x;
	
	//here we are using the dereferencing operator (*) to access the value pointed by the pointer and assigning it by doing *xpt	
	std::cout<<"the address of the x variable is: "<<xpt<<" and it's value is: "<<*xpt<<std::endl;
	
	//this code help us understand that the value pointed changes but if we assign that value to one variable in runtime that one will not change since
	//it's been executed only once
	int *apt = &a;
	b = *apt;
	a = 7;
	std::cout<<*apt<<","<<b<<","<<a<<std::endl;
	
	//we also have different type of pointers
	
	//null pointers are useful for comparison to make sure that the pointer we want to acces actually exist
	int pt = nullptr; //this pointer is the only one that is equal to false when converted to bool
	
	return  0;
}

