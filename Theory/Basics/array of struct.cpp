#include<iostream>

// Defining a simple struct to represent a contact
struct Contact {
    int age;
    bool alive;
};

// Declaring an array of structs to hold multiple contacts (10 elements)
struct Contact list_of_contact[10];

// Function prototypes
void fill(struct Contact* lc);
void show(struct Contact* lc);

int main() {
    // Filling the array with data
    fill(list_of_contact);

    // Displaying the contents of the array
    show(list_of_contact);

    return 0;
}

// This function fills the array of structs with data.
// The argument is a pointer to the first element of the array of structs.
void fill(struct Contact* lc) {
    for (int i = 0; i < 10; i++) {
        lc[i].age = i;  // Assigning values to the 'age' field of the struct
        lc[i].alive = true;  // Setting the 'alive' field to true
    }
}

// This function displays the contents of the array of structs.
// The argument is a pointer to the array.
void show(struct Contact* lc) {
    for (int i = 0; i < 10; i++) {
        // Accessing and displaying the 'age' and 'alive' fields of each struct
        std::cout << "The contact " << i << " is " << lc[i].age << " years old";
        if (lc[i].alive) {
            std::cout << " and is alive." << std::endl;
        } else {
            std::cout << " and is dead." << std::endl;
        }
    }
}
