// The following line is a header guard to prevent multiple inclusions of the same header file.
// If this file has already been included, the symbol `HEADER_H` will be defined,
// and the preprocessor will skip the content of this file.
#ifndef HEADER_H
#define HEADER_H

#include <iostream>  // Including necessary library for std::string and std::cout

// Defining a struct named 'Person'.
// The struct contains two members: an integer 'age' and a string 'name'.
struct Person {
    int age;
    std::string name;
};

// End of the header guard. It ensures that the header's content is included only once in the compilation unit.
#endif
