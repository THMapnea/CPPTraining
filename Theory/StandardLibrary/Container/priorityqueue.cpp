#include <iostream>
#include <queue>
#include <string>

// Define a structure for Person with a name and ID
struct Person {
    std::string name;
    int id;

    // Overload the < operator to allow priority comparison based on ID (for this example)
    bool operator<(const Person& other) const {
        return id < other.id;  // Max-heap: Higher ID has higher priority
    }
};

int main() {
    // Create a priority queue (max-heap) to hold Person objects
    std::priority_queue<Person> my_heap;
    std::string name;

    // Loop to insert 3 persons into the heap
    for (int i = 0; i < 3; i++) {
        Person p;
        std::cout << "Insert a name: ";
        std::cin >> name;
        p.name = name;  // Assign the input name to the Person object
        p.id = i;       // Assign an ID to the Person object
        my_heap.push(p);  // Push the Person object into the heap
    }

    // Loop to pop and display each person in the heap (highest priority first)
    std::cout << "\nThe people in the heap are (ordered by ID):\n";
    while (!my_heap.empty()) {
        const Person& p = my_heap.top();  // Get the person with highest priority (largest ID)
        std::cout << "Name: " << p.name << ", ID: " << p.id << std::endl;
        my_heap.pop();  // Remove the person from the heap
    }

    return 0;
}
