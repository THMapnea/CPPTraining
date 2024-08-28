#include<iostream>


int main(){
	//data
	int a = 10;
	int b = 10;
	int c = 11;
	int X = 2;
	//data in bit format is achieved py adding '0b' as prefix
	int bit_a = 0b10;
	int bit_b = 0b10;
	int bit_c = 0b11;
	
	//sum
	int sum = a + b; 
	
	//difference
	int difference = a - b;
	
	//multiplication
	int mul = a * b;
	
	//division
	float div = a / b;
	
	//remainder
	int rem = a % c;
	
	//post increment
	c++; //it's the same as writing c = c + 1 
	
	// post decrement
	c--; //itìs the same as writing c = c - 1

	//pre increment
	++c; //it's the same as writing c = c + 1 but the action is performed before evaluating the variable 
	
	// pre decrement
	--c; //itìs the same as writing c = c - 1 but the action is performed before evaluating the variable
	
	//relational operators
	bool TRUE = a == b; //=> 1 thats the same as saying true
	
	bool FALSE = a == c; //=> 0 that's the same as saying false
	
	bool NOTTRUE = a != b; //=> 0 since we are checkink if they are different
	
	bool NOTFALSE = a != c; //=> 1 since we are checkink if they are different
	
	bool greater = a > c; //=> 0 since c is greater than a
	
	bool smaller = a < c; //=> 1 since a is smaller than c
	
	bool conditionorequal = a <= b; //=> we can also include an equal afther the operation to check for equivalence in the case above a = b return false
	
	//logical operator
	bool logicand = a && b;
	
	bool logicor = a || b;
	
	bool logicnot = !TRUE; //we invert the value of a boolean operation
	

	
	//bitwise logical operator
	int bitwiseand = bit_a & bit_c; //we got back an integer that is the result of making a and bit by bit 
	
	int bitwiseor = bit_a | bit_c; //we got back an integer that is the result of making a or bit by bit 
	
	int bitwisexor = bit_a ^ bit_c; //we got back an integer that is the result of making a xor bit by bit 
	
	int bitwisenot = ~bit_a; //we got back an integre that is the result of making a not bit by bit, the ~ char can be wrote by doing (alt + 126) with number block off
	
	int bitwiseLshift = bit_a << X; //we got back an integer that is the result of shifting by X position every bit towards the left
	
	int bitwiseRshift = bit_a >> X; //we got back an integer that is the result of shifting by X position every bit towards the right
	

	return 0;
}


