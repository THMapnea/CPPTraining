#include<iostream>
#include<list>

int main() {
    // A doubly linked list is implemented as std::list for efficient insertion and deletion from anywhere.
    std::list<int> my_list;

    // Using .assign() to assign values to the list.
    // Syntax: .assign(count, value) assigns 'count' elements with the given 'value'.
    // This assigns 2 elements, each with the value 3.
    my_list.assign(2, 3); // Now the list has two elements: [3, 3]

    // We can access the front element using .front()
    std::cout << "The front element is: " << my_list.front() << std::endl; // Output: 3
    
    // We can also access the back element using .back()
    std::cout << "The back element is: " << my_list.back() << std::endl; // Output: 3
    
    // Checking if the list is empty using .empty()
    if (my_list.empty()) {
        std::cout << "The list is empty" << std::endl;
    } else {
        std::cout << "The list is not empty" << std::endl;
    }

    // .max_size() returns the maximum number of elements the list can theoretically hold.
    std::cout << "The max size of the list is: " << my_list.max_size() << std::endl;

    // Clearing the list using .clear(), which removes all elements.
    my_list.clear();

    // After clearing, we can check if the list is empty again.
    if (my_list.empty()) {
        std::cout << "The list is now empty after calling clear()." << std::endl;
    }

    return 0;
}
