#include<iostream>
#include<vector>



//sometimes it can be useful to have dynamically sized array and we can do so with a library called vector
//here i listed some of the useful but there are much more to browse in the documentation



int main(){
	
	//see as how now we dont need to specify a dimension anymore we just need to specify the type in the template
	std::vector<int> dynamic_array;
	
	for(int i = 0; i < 1000; i++){
		//since we havent specified the dimension we need to use one of the function of the vector class that adds a value pushing back the other
		dynamic_array.push_back(i);
		std::cout<<dynamic_array[i]<<std::endl;
	}
	
	//we can get the end element by calling back()
	std::cout<<"the last element is: "<<dynamic_array.back()<<std::endl;
	
	
	//to get the first element we can call front()
	std::cout<<"the first element is: "<<dynamic_array.front()<<std::endl;
	
	
	//we can also get the size by callinge size()
	std::cout<<"the size of my dynamic array is: "<<dynamic_array.size()<<std::endl;
	
	
	//to access an element we can also use at(index)
	std::cout<<"the element at the position 3 is: "<<dynamic_array.at(3)<<std::endl;
	
	
	//we can also clear the array by calling clear()
	dynamic_array.clear();
	
	
	//we can also give a dimension to dynamic array to have a better memory control
	std::vector<int> sized_dynamic_array(1000);
	
	
	//we can also get the max possible size of an array by calling maxsize()
	std::cout<<"the max size is: "<<sized_dynamic_array.max_size()<<std::endl;
	
	
	//or we can also get the number of element s that can be stored in our array by calling .capacity()
	std::cout<<"the capacity of our array is: "<<sized_dynamic_array.capacity()<<std::endl;
	
	
	//if some memory doesnt get used we can call shrinktofit() and give the excess space back to the memory
	//so that if for example we allocated only 100 elements the remaining 900 will be given back to the memory freeing the space
	sized_dynamic_array.shrink_to_fit();	
	
	
	//we can check if the array is empty by calling empty()
	std::cout<<"is the array empty? "<<sized_dynamic_array.empty()<<std::endl;
	
	
	return 0;
}