#include<iostream>

// A struct is useful for grouping multiple types of data into a single unit.
// This struct 'Contact' holds different types of information about a person.
struct Contact {
	std::string name;               // Name of the contact
	std::string surname;            // Surname of the contact
	int age;                        // Age of the contact
	bool alive = true;              // Boolean to track if the person is alive
	int assigned_array[10];         // An array to store additional assigned numbers
} general_contact;  // You can create an instance of the struct here if needed.

// Global instance of 'Contact' struct
struct Contact contact;

// Function prototype to display the content of a struct
void showStruct(Contact c);

int main() {
	// We can access and fill the struct fields using the (.) operator
	contact.name = "pino";
	contact.surname = "gino";
	contact.age = 10;
	contact.alive = false;
	
	// Assigning values to the array inside the struct
	for (int i = 0; i < 10; i++) {
		contact.assigned_array[i] = i;
	}
	
	// Call the function to display the struct's data
	showStruct(contact);
	return 0;
}

// Function to display the details of a Contact struct
void showStruct(Contact c) {
	std::cout << "The name of the contact is: " << c.name << std::endl;
	std::cout << "The surname of the contact is: " << c.surname << std::endl;
	std::cout << "The age is: " << c.age << std::endl;
	
	// Check if the contact is alive or not
	if (c.alive) {
		std::cout << "He/she is alive" << std::endl;
	} else {
		std::cout << "He/she is dead" << std::endl;
	}
	
	// Display the numbers in the assigned array
	std::cout << "The random numbers assigned to the contact are: ";
	for (int i = 0; i < 10; i++) {
		std::cout << c.assigned_array[i];
		if (i < 9) std::cout << ",";  // Adds a comma between elements
	}
	std::cout << std::endl;
}
