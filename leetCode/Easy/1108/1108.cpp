#include<iostream>



//data
std::string address = "1.1.1.1";

//prototype
std::string solution(std::string address);


int main(){
	
	std::cout<<solution(address)<<std::endl;
	
	return 0;
}

std::string solution(std::string address){
    //create a new variable
    std::string result;
    
    //loop trough every character
    for(char c : address){
    	
        //if we find the point we add the new sequence else we assign the normal value
        if(c == '.'){
            result += "[.]";
        }else{
            result += c;
        }
        
    }
    return result;
}
