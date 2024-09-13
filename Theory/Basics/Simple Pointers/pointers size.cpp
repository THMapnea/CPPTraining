#include<iostream>



//we will now see a little bit of pointer arythmetics


//data
int a = 1002;


int main(){
	int *p  = &a;
	
	//we can also check the size of our pointed variable using sizeof() method
	std::cout<<"the size of the pointer is "<<sizeof(p)<<" and the size of the pointed value is: "<<sizeof(*p)<<std::endl;
 
	return 0;
}