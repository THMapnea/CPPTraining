#include<iostream>
#include<vector>
#include<stack>




class Calculator{
	public:
		std::string expression;
		double result;
	
	public:
		void getExpression();
		void showExpression();
		void showResult();
		bool bracketClosureController(std::string bracket_list);
	
	public:
		Calculator(){
			Calculator::result = 0;
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
	c.showExpression();
	c.showResult();
	
	return 0;
}




void Calculator::getExpression(){
	std::cout<<"insert your expression following mathematical notation: "<<std::endl;
	std::cin>>Calculator::expression;
}

void Calculator::showExpression(){
	std::cout<<"the entered expression is: "<<Calculator::expression<<std::endl;
}

void Calculator::showResult(){
	std::cout<<"the result of your expression is: "<<Calculator::result<<std::endl;
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





