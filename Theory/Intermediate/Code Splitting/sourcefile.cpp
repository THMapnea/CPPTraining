// Including the custom header file "header.h".
// This will bring in the definition of the `Person` struct from the header file.
#include "header.h"

#include <iostream>  // Including iostream again, but it won't cause any issues since iostream also uses include guards.

int main() {
    // We can now create an instance of `Person` which is defined in the header file.
    Person p;

    // Assigning values to the members of the `Person` struct.
    p.age = 25;
    p.name = "John Doe";

    // Outputting the values stored in the `Person` struct.
    std::cout << "Person Name: " << p.name << ", Age: " << p.age << std::endl;

    return 0;
}
