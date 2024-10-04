#include<iostream>
#include<stack>
#include<vector>





//data
std::string data = {"{([()])}"};





int main(){
	
	
	int circular_counter = 0;
	int square_counter = 0;
	int curly_counter = 0;
	
	for(auto& element : data){
		if(element == '(' || element == ')'){
			circular_counter += 1;
		}else if(element == '[' || element == ']'){
			square_counter += 1;
		}else if(element == '{' || element == '}'){
			curly_counter += 1;
		}
		
	}
	
	if(circular_counter % 2 == 0 && square_counter % 2 == 0 && curly_counter % 2 == 0){
		std::cout<<"correct number of brackets"<<std::endl;
	}else{
		std::cout<<"some brackets are incomplete"<<std::endl;
	}
	

	
	return 0;
}
