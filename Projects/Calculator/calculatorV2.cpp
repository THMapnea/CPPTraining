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
		void compute();
		double sum(double x, double y);
		double difference(double x, double y);
		double multiplication(double x, double y);
		double division(double x, double y);
		void showResult(double result);
		void showExpression();
	
	public:
	Calculator(){
		std::cout<<"calculator on"<<std::endl;
	}
	
	public:
	~Calculator(){
		std::cout<<"calculator off"<<std::endl;
	}
};


//MAIN
int main(){
	
	Calculator c;
	c.getInput();
	c.compute();
	c.showExpression();
	
	
	return 0;
}


//FUNCTIONS

//handles input
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
		std::cout<<"do you want to STOP? press (y) to confirm ";
		std::cin>>c_temp;
		if(c_temp == 'y' || c_temp == 'Y'){
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

//shows the result
void Calculator::showResult(double result){
	//shows the result
	std::cout<<result<<std::endl;
}

void Calculator::showExpression(){
	std::cout<<"the passed expression is: ";
	for(const VariantType& element : Calculator::expression){
		//chech wich type is the element and handle consequentially
		if(element.VEDT == DOUBLE){
			//access only the right data type so that std::cout knows what it should show
			std::cout<<element.VED.value;
		}else if(element.VEDT == CHAR){
			std::cout<<element.VED.operator_symbol;
		}
	}
	std::cout<<std::endl;
}


void Calculator::compute(){
	double total = 0;
	double x; 
	double y;
	for(int i = 1; i < Calculator::expression.size(); i += 2){
		if(Calculator::expression[i].VEDT == CHAR ){
			if(i == 1){
				x = Calculator::expression[i - 1].VED.value;
				y = Calculator::expression[i + 1].VED.value;
				}else{
					x = 0;
					y = Calculator::expression[i + 1].VED.value;	
				}
			switch(Calculator::expression[i].VED.operator_symbol){
				case '+':
					total = total + (Calculator::sum(x,y));
					std::cout<<total<<std::endl;
					break;
				default:
					std::cout<<"error operator unknown"<<std::endl;
			}
		}
	}

}

double Calculator::sum(double x, double y){
	return x + y;
}






