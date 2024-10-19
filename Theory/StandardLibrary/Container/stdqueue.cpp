#include <iostream>
#include <queue>

// Define a structure for Person with a name and ID
struct Person {
    std::string name;
    int id;
};

int main() {
    // Create a queue to hold Person objects
    std::queue<Person> my_queue;
    std::string name;

    // Loop to insert 3 persons into the queue
    for (int i = 0; i < 3; i++) {
        Person p;
        std::cout << "Insert a name: ";
        std::cin >> name;
        p.name = name;  // Assign the input name to the Person object
        p.id = i;       // Assign an ID to the Person object
        my_queue.push(p);  // Push the Person object into the queue
    }

    // Loop to pop and display each person in the queue
    for (int i = 0; i < 3; i++) {
        std::cout << "The person in line is: " << my_queue.front().name << std::endl;
        my_queue.pop();  // Remove the front Person from the queue
    }

    return 0;
}
