#include<iostream>






int main(){
	//int type usually 4 bytes
	int a = 2;
	int b = 3;
	short int c = 4; //smaller space took in memory respect int type usually 2 bytes
	long int d = 12121212; //more space took in memory respect int type depends on the structure
	long long int e = 272118218281823812; // well you can probably guess this one it depends on the structure
	
	//floating point value are numbers with decimal point
	float f = 2.9; // usually 4 bytes
	double g = 9.99999; // usually 8 bytes
	
	//char attention when we talk about char you need to use '' and not ""
	char h = 'h'; //usually 1 byte
	
	//boolean either true(1) or false(0)
	bool i = true;
	bool j = false;
	bool k = 1; //is the same as saying true
	bool l = 0; //is the same as saying false
	
	
	return 0;
}