#include<iostream>

int main() {
    // Integer variables
    int a = 10;
    int b = 10;
    int c = 11;
    int X = 2;
    
    // Binary literals can be used by adding '0b' as prefix
    int bit_a = 0b10; // Binary for 2
    int bit_b = 0b10; // Binary for 2
    int bit_c = 0b11; // Binary for 3
    
    // Arithmetic operations
    int sum = a + b; // Sum of a and b
    int difference = a - b; // Difference between a and b
    int mul = a * b; // Multiplication of a and b
    
    // Division, using float to get decimal result
    float div = static_cast<float>(a) / b; // Typecast to float to avoid integer division
    
    // Remainder (modulus)
    int rem = a % c; // Remainder when a is divided by c

    // Post-increment (increments after using the variable)
    c++; // Same as: c = c + 1
    
    // Post-decrement (decrements after using the variable)
    c--; // Same as: c = c - 1

    // Pre-increment (increments before using the variable)
    ++c; // Same as: c = c + 1
    
    // Pre-decrement (decrements before using the variable)
    --c; // Same as: c = c - 1

    // Relational operators
    bool TRUE = (a == b); // True if a is equal to b
    bool FALSE = (a == c); // True if a is equal to c (which is false in this case)
    
    bool NOTTRUE = (a != b); // True if a is not equal to b
    bool NOTFALSE = (a != c); // True if a is not equal to c
    
    bool greater = (a > c); // True if a is greater than c (false here)
    bool smaller = (a < c); // True if a is smaller than c (true here)
    bool conditionorequal = (a <= b); // True if a is less than or equal to b

    // Logical operators
    bool logicand = (a && b); // Logical AND, true if both are non-zero (true in this case)
    bool logicor = (a || b);  // Logical OR, true if either is non-zero
    bool logicnot = !TRUE;    // Logical NOT, inverts the boolean value

    // Bitwise operators (works at the bit level)
    int bitwiseand = bit_a & bit_c; // Bitwise AND (result: 0b10 & 0b11 = 0b10 => 2)
    int bitwiseor = bit_a | bit_c;  // Bitwise OR (result: 0b10 | 0b11 = 0b11 => 3)
    int bitwisexor = bit_a ^ bit_c; // Bitwise XOR (result: 0b10 ^ 0b11 = 0b01 => 1)
    
    int bitwisenot = ~bit_a; // Bitwise NOT (flips bits of 0b10, result depends on system)
    
    // Bit shifting
    int bitwiseLshift = bit_a << X; // Left shift by X positions (result: 0b10 << 2 = 0b1000 => 8)
    int bitwiseRshift = bit_a >> X; // Right shift by X positions (result: 0b10 >> 2 = 0b00 => 0)

    // Outputting results for verification
    std::cout << "Arithmetic Results:" << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Multiplication: " << mul << std::endl;
    std::cout << "Division: " << div << std::endl;
    std::cout << "Remainder: " << rem << std::endl;

    std::cout << "\nRelational Results:" << std::endl;
    std::cout << "a == b: " << TRUE << std::endl;
    std::cout << "a == c: " << FALSE << std::endl;
    std::cout << "a != b: " << NOTTRUE << std::endl;
    std::cout << "a != c: " << NOTFALSE << std::endl;
    std::cout << "a > c: " << greater << std::endl;
    std::cout << "a < c: " << smaller << std::endl;
    std::cout << "a <= b: " << conditionorequal << std::endl;

    std::cout << "\nLogical Results:" << std::endl;
    std::cout << "a && b: " << logicand << std::endl;
    std::cout << "a || b: " << logicor << std::endl;
    std::cout << "!TRUE: " << logicnot << std::endl;

    std::cout << "\nBitwise Results:" << std::endl;
    std::cout << "bit_a & bit_c: " << bitwiseand << std::endl;
    std::cout << "bit_a | bit_c: " << bitwiseor << std::endl;
    std::cout << "bit_a ^ bit_c: " << bitwisexor << std::endl;
    std::cout << "~bit_a: " << bitwisenot << std::endl;
    std::cout << "bit_a << X: " << bitwiseLshift << std::endl;
    std::cout << "bit_a >> X: " << bitwiseRshift << std::endl;

    return 0;
}
