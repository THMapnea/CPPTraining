#include<iostream>

//const
const int array_dim = 10;

//data
int my_array[5] = {6,5,3,29,0};
int my_no_dimension_array[] = {0,12,3,4,56,1,2,3,4,5,6,7,8}; //in this case the compiler will take care of giving the dimension to the array only if you initialize it's values
int array[array_dim]; 

//prototypes
void show(int *array, int array_dim);
void generate(int *array, int array_dim);
void pointerAccessToArray(int *array, int array_dim);



int main(){
	//the first thing that we want to do to an array is accessing it to do so we can use a for loop or a while loop depending on the situation
	//where i will be our iterator that is used to access the i-th element of the array
	for(int i = 0; i < 5; i++){
		std::cout<<"the element "<<my_array[i]<<" is at index "<<i<<std::endl; //i am showing them but i can also perform action on it
	}
	
	//from here on we will use function to make the code more clear if you dont' understand them go look up the function file
	
	//differently from c we dont need to use dereferenciation to pass the array to the function c++ does this for us
	generate(array,array_dim);
	show(array,array_dim);
	pointerAccessToArray(array,array_dim);
	return 0;
}



//we are passing to the function the pointer to our array to allows it to modify it since rememebr that all the element of the array are in consecutive memory space 
void show(int *array, int array_dim){ //i am passing array_dim only to show since it'is in global scope it could be avoided
	for(int i = 0; i < array_dim; i++){
		std::cout<<"the array element is: "<<array[i]<<std::endl;
	}
}

void generate(int *array, int array_dim){
	for(int i = 0; i < array_dim; i++){
		array[i] = i;
	}
	
}

//this example can be understood better by knowing pointer arytmethic we are basically deferencing our pointer in a way that we increase the address 
//therefore passing to the next value due to how arrays are created
void pointerAccessToArray(int *array, int array_dim){
	for(int i = 0; i < array_dim; i++){
		*(array + i) = i;
		std::cout<<"the element of the array at the position: "<<i<<" accessed trough pointer arythmetic is: "<<*(array + i)<<std::endl;
	}
}






