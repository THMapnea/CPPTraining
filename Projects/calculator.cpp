#include<iostream>
#include<vector>



class Calculator{
	public:
		double x;
		double y;
		char op;
	public:
		void getInput();
		void showResult();
		double sum();
		double difference();
		double multiplication();
		double division();
};



int main(){
	
	Calculator c;
	c.getInput();
	
	
	
	return 0;
}

void Calculator::getInput(){
	std::cout<<"insert first number: ";
	std::cin>>Calculator::x;
	std::cout<<"insert operation: ";
	std::cin>>Calculator::op;
	std::cout<<"insert second number: ";
	std::cin>>Calculator::y;
	switch(op){
		case '+':
			break;
		case '-':
			break;
		default:
			std::cout<<"error invalid operation inserted"<<std::endl;
			break;
	}
}


double Calculator::sum(){
	return Calculator::x + Calculator::y;
}

double Calculator::difference(){
	return Calculator::x - Calculator::y;
}

double Calculator::multiplication(){
	return Calculator::x * Calculator::y;
}

double Calculator::division(){
	return Calculator::x - Calculator::y;
}




