#include<iostream>
#include<vector>



class Calculator{
	public:
		std::vector<double> values;
		std::vector<char> operations;
		
	public:
		void getInput();
		void showResult(double result);
		double sum();
		double difference();
		double multiplication();
		double division();
	
	Calculator(){
		std::cout<<"calculator on"<<std::endl;
	}
	
	~Calculator(){
		std::cout<<"calculator off"<<std::endl;
	}
};



int main(){
	
	Calculator c;
	c.getInput();
	
	
	
	return 0;
}

void Calculator::getInput(){
	double v_temp;
	char c_temp;
	std::cout<<"insert first number: ";
	std::cin>>v_temp;
	Calculator::values.push_back(v_temp);
	std::cout<<"insert operation: ";
	std::cin>>c_temp;
	Calculator::operations.push_back(c_temp);
	std::cout<<"insert second number: ";
	std::cin>>v_temp;
	Calculator::values.push_back(v_temp);
	switch(operations[0]){
		case '+':
			Calculator::showResult(Calculator::sum());
			break;
		case '-':
			Calculator::showResult(Calculator::difference());
			break;
		case '*':
			Calculator::showResult(Calculator::multiplication());
			break;
		case '/':
			Calculator::showResult(Calculator::division());
			break;
		default:
			std::cout<<"error invalid operation inserted"<<std::endl;
			break;
	}
}



void Calculator::showResult(double result){
	std::cout<<result<<std::endl;
}


double Calculator::sum(){
	return Calculator::values[0] + Calculator::values[1];
}

double Calculator::difference(){
	return Calculator::values[0] - Calculator::values[1];
}

double Calculator::multiplication(){
	return Calculator::values[0] * Calculator::values[1];
}

double Calculator::division(){
	return Calculator::values[0] / Calculator::values[1];
}




