#include<iostream>
#include<forward_list>

int main() {
    // A forward list is a singly linked list (only forward traversal is allowed).
    // It is optimized for fast insertion and removal of elements, especially at the front.
    std::forward_list<int> my_forward_list;

    // Using .assign() to assign values to the forward list.
    // Syntax: .assign(count, value) assigns 'count' elements with the value 'value'.
    // Example: assigning 1 element with value 2.
    my_forward_list.assign(1, 2); // Now the forward list has one element: [2]

    // We can access the front element using .front()
    std::cout << "The front element is: " << my_forward_list.front() << std::endl; // Output: 2

    // Checking if the forward list is empty using .empty()
    // Note: std::forward_list does not have an .empty() member function, but we can check if it is empty by checking if the beginning equals the end.
    if (my_forward_list.begin() == my_forward_list.end()) {
        std::cout << "The forward list is empty" << std::endl;
    } else {
        std::cout << "The forward list is not empty" << std::endl;
    }

    // .max_size() returns the maximum number of elements the forward list can theoretically hold.
    std::cout << "The max size of the forward list is: " << my_forward_list.max_size() << std::endl;

    // Clearing the forward list by assigning an empty list to it.
    my_forward_list.assign(0, 0); // This effectively clears the list.

    // Checking if the list is now empty
    if (my_forward_list.begin() == my_forward_list.end()) {
        std::cout << "The forward list is now empty after clearing." << std::endl;
    }

    return 0;
}
