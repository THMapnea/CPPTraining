#include<iostream>
#include<vector>
#include<stack>
#include<map>
#include<variant>


struct Operation{
	std::string op;
	std::variant<Operation*,double> operand1;
	std::variant<Operation*,double> operand2;
};





class Calculator{
	public:
		std::string expression;
	
	public:
		void getExpression();
		void showExpression();
		void showResult(double result);
		bool bracketClosureController(std::string bracket_list);
		std::stack<Operation> sortOperation();
		double computeExpression();
	
	public:
		Calculator(){
			std::cout<<"calculator on"<<std::endl;
		}
	public:
		~Calculator(){
			std::cout<<"calculator off"<<std::endl;
		}
};





int main(){
	
	Calculator c;
	c.getExpression();
	c.sortOperation();
	c.showExpression();
	c.showResult(c.computeExpression());
	
	return 0;
}




void Calculator::getExpression(){
	std::cout<<"insert your expression following mathematical notation: "<<std::endl;
	std::cin>>Calculator::expression;
}


void Calculator::showExpression(){
	std::cout<<"the entered expression is: "<<Calculator::expression<<std::endl;
}


void Calculator::showResult(double result){
	std::cout<<"the result of your expression is: "<<result<<std::endl;
}


bool Calculator::bracketClosureController(std::string bracket_list){
    std::stack<char> open_brackets;

    for (char ch : bracket_list) {
        // If it's an opening bracket, push it onto the stack
        if (ch == '(' || ch == '[' || ch == '{') {
            open_brackets.push(ch);
        } 
        // If it's a closing bracket
        else if (ch == ')' || ch == ']' || ch == '}') {
            // Check if stack is empty
            if (open_brackets.empty()) {
                return false; // No matching opening bracket
            }
            // Check for matching brackets
            char top = open_brackets.top();
            if ((ch == ')' && top == '(') || 
                (ch == ']' && top == '[') || 
                (ch == '}' && top == '{')) {
                open_brackets.pop(); // Pop the matching opening bracket
            } else {
                return false; // Mismatched closing bracket
            }
        }
    }
    // If stack is empty, all brackets are matched
    return open_brackets.empty();
}


double Calculator::computeExpression(){
	double result = 0;
	
	return result;
}


std::stack<Operation> Calculator::sortOperation(){
	std::string expression = Calculator::expression;
	std::stack<Operation> sorted_operation;
		
	if(Calculator::bracketClosureController(expression)){
		
	}else{
		std::cout<<"some of the brackets may not be closed"<<std::endl;
	}

	
	return sorted_operation;
}




