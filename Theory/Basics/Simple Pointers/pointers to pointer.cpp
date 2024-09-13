#include<iostream>



//data 
int a = 13;



int main(){
	//we declare the first pointer
	int *p1 = &a;
	
	//then we declare a pointer that points to a pointer
	int **p2 = &p1;
	
	//let's see what happens
	std::cout<<"the address of the value pointed by the first pointer is: "<<p1<<" and it's value is: "<<*p1<<std::endl;
	
	//we can see how the value obtained is the same but the second pointer doesnt actually point to the value itself
	//but it points to the memory address of the pointer that points to the value to access the value we need to dereference the pointer two times **p2
	std::cout<<"the address of the value pointed by the second pointer is: "<<p2<<" and it's value is: "<<*p2<<std::endl;
	std::cout<<" the value contained at the address pointed by the pointer pointed is: "<<**p2<<std::endl;	
	
	//potentially we could repeat this chain as many times as we want
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	std::cout<<"as you can see the value pointed at the top is always the same: "<<***p3<<","<<****p4<<","<<*****p5<<std::endl;
	
	
	
	
	return 0;
}