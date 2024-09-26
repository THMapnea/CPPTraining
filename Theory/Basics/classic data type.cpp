#include<iostream>

int main() {
	// Integer types:
	int a = 2;                  // Regular integer, usually 4 bytes in size
	int b = 3;                  // Another integer
	short int c = 4;            // Short integer, usually 2 bytes, takes up less memory than `int`
	long int d = 12121212;      // Long integer, takes up more memory than `int`, size depends on system architecture
	long long int e = 272118218281823812;  // Larger integer, suitable for very large numbers, also architecture-dependent
	
	// Floating point types (for decimals):
	float f = 2.9f;             // Float, usually 4 bytes, holds single-precision decimal values
	double g = 9.99999;         // Double, usually 8 bytes, holds double-precision decimal values
	
	// Character type:
	char h = 'h';               // Character, usually 1 byte, holds a single character (use single quotes for chars)
	
	// Boolean type:
	bool i = true;              // Boolean, holds true (1) or false (0), usually 1 byte
	bool j = false;             // Boolean false
	bool k = 1;                 // `1` is treated as `true` in C++
	bool l = 0;                 // `0` is treated as `false` in C++
	
	return 0;
}
