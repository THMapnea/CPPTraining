#include<iostream>

//Const 
const int arrayDim = 10;

//Data
typedef int IntArray[arrayDim];


//Function Definition
void show(int* array, int arrayDim);
int* generate(int arrayDim);

//MAIN
int mainArray() {
	int* array = generate(arrayDim);
	show(array, arrayDim);
	return 0;
}


//Function Implementation
int* generate(int arrayDim) {
	IntArray array;
	for (int i = 0; i < arrayDim; i++) {
		array[i] = i * 2;
	}
	return array;
};

void show(int* array, int arrayDim) {
	for (int i = 0; i < arrayDim; i++) {
		std::cout << array[i] << std::endl;
	}
};