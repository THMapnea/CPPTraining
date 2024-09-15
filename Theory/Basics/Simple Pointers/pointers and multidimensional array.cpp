#include<iostream>


//data
//we have an array whose variables are other array in this case we will have a matrix or if you prefer a rank two tensor
//that means that every element of the outer array occupies the size of the entire inner array
//in this case we have 3 arrays of 12 byte so the outer array occupies 36 bytes and not 12
//everything written here can be expanded with n-dimension but it's easier to visualize it like this
int two_d_array[3][3] = {
							{0,1,2},
							{3,4,5},
							{6,7,8}
						};
						
//for fun let's declare a more complex array												
float four_d_array[5][3][2][4];



//prototype
void setZero(int (*two_d_array)[3]);
void setFourDArray(float (*four_d_array)[3][2][4]);


int main(){
	//let's create a pointer to our multi dimensional array
	std::cout<<"let's access this array in various way and see what happens"<<std::endl;
	
	//you can see how we get the same address with each and every of this syntax
	std::cout<<two_d_array<<std::endl;
	std::cout<<*two_d_array<<std::endl;
	std::cout<<two_d_array[0]<<std::endl;
	std::cout<<&two_d_array[0][0]<<std::endl;
	
	//if we want to access a particular value we can do it like this where i = row and j = column
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			std::cout<<two_d_array[i][j]<<",";
		}
	}
	std::cout<<std::endl;
	
	
	setZero(two_d_array);
	
	
	//this is the same but with pointer arythmetic
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				std::cout<<*(*(two_d_array + i) + j)<<",";
			}
	}
	std::cout<<std::endl;
	
	
	//let's see the multidimensionals
	setFourDArray(four_d_array);
	return 0;

}

//handling the multi dimensional array as argument of the function is a little troublesome
//since we can only pass as a pointer the first dimension so the other dimension must have a value
void setZero(int (*two_d_array)[3]){
			for(int i = 0; i < 3; i++){
				for(int j = 0; j < 3; j++){
					*(*(two_d_array + i) + j) = 0;;
				}
	}
}


//here we show in multidimensional cases to understand it better it might be useful to rewrite it by yourself
void setFourDArray(float (*four_d_array)[3][2][4]){
	float z = 0;
			for(int i = 0; i < 5; i++){
				for(int j = 0; j < 3; j++){
					for(int k = 0; k < 2; k++){
						for(int m = 0; m < 4; m++){
							*(*(*(*(four_d_array + i) + j) + k) + m) = (z / 2);
							z++;
							std::cout<<*(*(*(*(four_d_array + i) + j) + k) + m)<<",";
						}
					}
				}
			}
}
















