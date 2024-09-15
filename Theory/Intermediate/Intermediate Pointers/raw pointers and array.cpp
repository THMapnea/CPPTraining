#include<iostream>



//we can dinamically create array of specified dimensions
int n = 10;





int main(){
	//we simply specify the number of elements(basically the number of sized address to assign)
	int *dynamic_array = new int[n];
	
	for(int i = 0; i < n; i++){
		//we can use both syntax to access the same thing
		dynamic_array[i] = i*i;
		std::cout<<"the element in the array is: "<<*(dynamic_array + i)<<std::endl;
	}
	
	//and as before after we did all of our operation we can delete and free the memory space
	delete[] dynamic_array;
	
	
	std::cout<<std::endl;
	for(int i = 0; i < n; i++){
		std::cout<<"the element in the array is: "<<*(dynamic_array + i)<<std::endl;
	}

	
	
	return 0;
	}