#include <iostream>
#include <deque>

// Define a structure for Person with a name and ID
struct Person {
    std::string name;
    int id;
};

int main() {
    // Create a deque to hold Person objects
    std::deque<Person> my_deque;
    std::string name;

    // Loop to insert 3 persons into the deque (pushing at the front)
    for (int i = 0; i < 3; i++) {
        Person p;
        std::cout << "Insert a name: ";
        std::cin >> name;
        p.name = name;  // Assign the input name to the Person object
        p.id = i;       // Assign an ID to the Person object
        my_deque.push_front(p);  // Push the Person object at the front of the deque
    }

    // Process the deque in normal order (pop from the front)
    std::cout << "\nProcessing deque in normal order (front to back):" << std::endl;
    while (!my_deque.empty()) {
        std::cout << "The person in line is: " << my_deque.front().name << std::endl;
        my_deque.pop_front();  // Remove the front Person from the deque
    }

    // Re-inserting data for reverse order processing
    for (int i = 0; i < 3; i++) {
        Person p;
        std::cout << "Insert a name: ";
        std::cin >> name;
        p.name = name;
        p.id = i;
        my_deque.push_back(p);  // Push the Person object at the back of the deque
    }

    // Process the deque in reverse order (pop from the back)
    std::cout << "\nProcessing deque in reverse order (back to front):" << std::endl;
    while (!my_deque.empty()) {
        std::cout << "The person in line is: " << my_deque.back().name << std::endl;
        my_deque.pop_back();  // Remove the back Person from the deque
    }

    return 0;
}
