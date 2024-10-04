#include<iostream>
#include<vector>
#include<stack>




class Calculator{
	public:
		bool bracketClosureController(std::string bracket_list);
};





int main(){
	
	Calculator c;
	
	return 0;
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





