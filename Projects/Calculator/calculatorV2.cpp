#include<iostream>
#include<vector>



class Calculator{
	public:
		std::vector<double> values;
		std::vector<char> operations;
		
	public:
		void getInput();
		double compute();
		double sum();
		double difference();
		double multiplication();
		double division();
		void showResult(double result);
	
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
	bool insert = true;
	double v_temp;
	char c_temp;
	
	
	std::cout<<"insert number: ";
	std::cin>>v_temp;
	Calculator::values.push_back(v_temp);
	std::cout<<"insert an operation: ";
	std::cin>>c_temp;
	Calculator::operations.push_back(c_temp);
	std::cout<<"insert a number: ";
	std::cin>>v_temp;
	values.push_back(v_temp);
	
	while(insert){
		std::cout<<"do you want to add another operation? press (y) to confirm ";
		std::cin>>c_temp;
		if(c_temp != 'y' && c_temp != 'Y'){
			break;
		}
	std::cout<<"insert an operation: ";
	std::cin>>c_temp;
	Calculator::operations.push_back(c_temp);
	std::cout<<"insert number: ";
	std::cin>>v_temp;
	Calculator::values.push_back(v_temp);

	}
	
}


double Calculator::compute(){
	for(int i = 0, j = 0; i < operations.size(); i++, j++){
		//define operation order...
	}
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


void Calculator::showResult(double result){
	std::cout<<result<<std::endl;
}


