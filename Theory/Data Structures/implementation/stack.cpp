#include<iostream>

/*

  We are going to implement from scratch

*/

//we first define the stack class with the template
template<typename T>
class Stack{
	private: 
		//pointer to the array of value of the stack
		T* arr;
		
		//index of the top value of the stack
		int top;
		
		//max capacity of the stack
		int capacity;
	
	public:
		//we define the constructor
		Stack(int size){
			//dynamically create the array of values
			arr = new T[size];
			
			//set the capacity
			capacity = size;
			
			//set the top index to empty
			top = -1;
		}
		
		//define the destructor
		~Stack(){
			//remove the values in the stack
			delete[] arr;
		}
		
		//define the push function to insert values in the stack
		void push(T value){
			//check if the stack is full
			if(isFull()){
				//tell the user it went in stack overflow
				std::cout<<"stack overflow"<<std::endl;
				return;
			}
			
			//insert the value in the array
			arr[++top] = value;
		}
		
		//define the pop function
		T pop(){
			//check if it's empty
			if(isEmpty()){
				std::cout<<"stack underflow"<<std::endl;
				return -1;
			}
			
			//remove the top element
			return arr[top--];
		}
		
		//define the peek function to look at the top without removing the element
		T peek(){
			//check if there are values to show
			if(isEmpty()){
				std::cout<<"the stack is empty"<<std::endl;
				//return a value for error handling
				return -1;
			}
			
			//return the top element
			return arr[top];
		}
		
		//define the isEmpty function
		bool isEmpty(){
			return top == -1;
		}
		
		//define the isFull() function
		bool isFull(){
			return top == capacity - 1;
		}
		
		//define a display function
		void display(){
			//check if there are values to show
			if(isEmpty()){
				std::cout<<"the stack is empty"<<std::endl;
			}
			
			//display all the values contained
			for(int i = top; i >= 0; --i){
				std::cout<<arr[i]<<" ";
			}
			std::cout<<std::endl;
		}

};

int main(){
	Stack<int> stack(5);  // Create a stack with a capacity of 5

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Stack elements: ";
    stack.display();

    std::cout << "Top element: " << stack.peek() << "\n";

    stack.pop();
    std::cout << "After popping, stack elements: ";
    stack.display();

    return 0;
	
	
	
	return 0;
}