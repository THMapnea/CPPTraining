#include <iostream>
#include <set>

// Define a structure for Person with a name and ID
struct Person {
    std::string name;
    int id;

    // Overload the < operator to allow sorting based on name
    bool operator<(const Person& other) const {
        return name < other.name;  // Compare names to decide the order
    }
};

int main() {
    // Create a set to hold Person objects
    std::set<Person> my_set;
    std::string name;

    // Loop to insert 3 persons into the set
    for (int i = 0; i < 3; i++) {
        Person p;
        std::cout << "Insert a name: ";
        std::cin >> name;
        p.name = name;  // Assign the input name to the Person object
        p.id = i;       // Assign an ID to the Person object
        my_set.insert(p);  // Insert the Person object into the set
    }

    // Loop to display each person in the set (it will be sorted by name)
    std::cout << "\nThe people in the set are:\n";
    for (const auto& p : my_set) {
        std::cout << "Name: " << p.name << ", ID: " << p.id << std::endl;
    }

    return 0;
}
