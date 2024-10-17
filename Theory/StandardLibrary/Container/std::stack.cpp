#include<iostream>
#include<stack>  // Including the stack header for using std::stack

// The stack data structure is a LIFO (Last In, First Out) structure.
// It operates like a stack of plates: the last plate placed on top is the first one removed.
// Operations include adding (push), removing (pop), and checking the top element (top).

int main() {
    // Declaring a stack object using std::stack. 
    // We specify the type of elements to be stored (in this case, integers).
    std::stack<int> my_stack;

    // To add elements to the stack, we use the .push() function.
    // Push places an element on top of the stack.
    my_stack.push(1);  // Stack is now: [1]
    my_stack.push(2);  // Stack is now: [1, 2] (2 is on top)

    // To access the element on the top of the stack, we use .top().
    // It returns the top (most recent) element without removing it.
    std::cout << "The element on top of the stack is: " << my_stack.top() << std::endl;  // Output: 2

    // To remove the top element, we use .pop().
    // It removes the element at the top, but does not return it.
    my_stack.pop();  // Stack is now: [1] (2 has been removed)

    // After popping, we can check the new top element.
    std::cout << "The element on top of the stack is: " << my_stack.top() << std::endl;  // Output: 1

    // We can also check how many elements are currently in the stack using .size().
    std::cout << "The size of the stack is: " << my_stack.size() << std::endl;  // Output: 1

    // To check if the stack is empty, we use the .empty() function.
    // It returns a boolean value: true if the stack is empty, false if it contains elements.
    if (my_stack.empty()) {
        std::cout << "The stack is empty" << std::endl;
    } else {
        std::cout << "The stack is not empty" << std::endl;  // Output: The stack is not empty
    }

    return 0;
}
