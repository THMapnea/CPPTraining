#include<iostream>


//prototype
void printInt(int number, int const base);


//another example of algorithm that uses recursion and runs with time complexity of O(N)
//is the algorithm that converts an integer in base 10 to another base like 16, here N = number of digits
int main(){

	//call the function
	printInt(1, 16);
	
	
	
	return 0;
}


void printInt(int number, int base){
	//first we create a string that contains all the possible values in this case hexadecimal
	std::string conversion = "0123456789ABCDEF";
	
	//then we get a single char and transform it in a digit
	char digit = static_cast<char>(number % base);
	
	//divide the number with the base to reduce the number by one digit
	number = number / base;
	
	//if we find the number we map the char to the right digit
	if(number != 0){
		printInt(number, base);
	}
	std::cout<<" "<<conversion[digit];
}
