#include<iostream>
#include<vector>




//prototype
bool less(int value1, int value2);
bool greater(int value1, int value2);
void swap(int& value1, int& value2, int& temp);
void bubbleSort(std::vector<int>& arr);



//we are going to implement the bubble sort algorithm but with an optimization in case
//our array is already partially sorted
int main(){
	
	//declare the array on wich we want to operate
	std::vector<int> data = {1,3,2,5,32,7,5,0,1};
	
	//let's apply bubble sort
	bubbleSort(data);
	
	//check if we did everithing correctly
	for(const auto& d : data){
		std::cout<<d<<",";
	}	
	
	
	
	return 0;
}

//function to see which is less between two value
bool less(int value1, int value2){
	return value1 < value2;
}

//function to see wich is greater between two value
bool greater(int value1, int value2){
	return value1 > value2;
}

//function that swaps two values
void swap(int& value1, int& value2, int& temp){
	//save the first value
	temp = value1;
	
	//swap the first value with the second one
	value1 = value2;
	
	//swap the second value with the first stored in the temp
	value2 = temp;
}

//bubbleSort implementation
void bubbleSort(std::vector<int>& arr){
	//get the size of the array
	int size = arr.size();
	
	//initialize a swapped variable to check if it is necessary to swap or they are already ordered
	int swapped = 1;
	
	//initialize a value for swapping
	int temp;
	
	//start looping
	for(int i = 0; i < (size -1) && swapped == 1; i++){
		//reset the swapped
		swapped = 0;
		
		//start the second loop from the first
		for(int j = 0; j < (size - i - 1); j++){
			//check if greater or less depending on how to sort
			if(greater(arr[j],arr[j + 1])){
				//swap the values
				swap(arr[j], arr[j + 1], temp);
				
				//set the swapped to 1
				swapped = 1;
			} 
		}
	}
		
}



















