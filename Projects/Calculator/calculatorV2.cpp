#include<iostream>
#include<vector>





//DATA,CLASSES AND STRUCTURES
union ValidExpressionData{
	//declare a union to save all the possible data type of an expression
	double value;
	char operator_symbol;
};

enum ValidExpressionDataType{
	//declare an enumeration to handle the various data types
	DOUBLE,
	CHAR
};


struct VariantType{
	//instance of the enum and the union of data
	ValidExpressionData VED;
	ValidExpressionDataType VEDT;
	
	//constructor for each type of operation to manually handle all the types of data
	VariantType(double value){
		VED.value = value;
		VEDT = DOUBLE;
	}
	
	VariantType(char value){
		VED.operator_symbol = value;
		VEDT = CHAR;
	}
};


//class that defines the calculator object
class Calculator{
	public:
		std::vector<VariantType> expression;
		
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


//MAIN
int main(){
	
	Calculator c;
	c.getInput();
	
	
	
	return 0;
}


//FUNCTIONS
void Calculator::getInput(){
	//temp variables
	bool insert = true;
	double v_temp;
	char c_temp;
	
	std::cout<<"insert number: ";
	std::cin>>v_temp;
	Calculator::expression.push_back(v_temp);
	std::cout<<"insert an operation: ";
	std::cin>>c_temp;
	Calculator::expression.push_back(c_temp);
	std::cout<<"insert a number: ";
	std::cin>>v_temp;
	Calculator::expression.push_back(v_temp);
	
	//check to stop operations
	while(insert){
		std::cout<<"do you want to add another operation? press (y) to confirm ";
		std::cin>>c_temp;
		if(c_temp != 'y' && c_temp != 'Y'){
			break;
		}
		
		std::cout<<"insert an operation: ";
		std::cin>>c_temp;
		Calculator::expression.push_back(c_temp);
		std::cout<<"insert a number: ";
		std::cin>>v_temp;
		Calculator::expression.push_back(v_temp);

	}
	
}


void Calculator::showResult(double result){
	//shows the result
	std::cout<<result<<std::endl;
}


