#include <iostream>
#include <map>

int main() {
    // Initializing a std::map with key-value pairs
    std::map<int, float> my_map = {
        {0, 2.3},
        {1, 3.5},
        {2, 4.7},
        {3, 0.4}
    };

    // Displaying elements using the map's indexing
    std::cout << "Initial map elements:" << std::endl;
    for (int i = 0; i < my_map.size(); i++) {
        std::cout << "Key: " << i << " -> Value: " << my_map[i] << std::endl;
    }

    // Adding new elements to the map using insert()
    my_map.insert({4, 5.8});
    my_map[5] = 6.2; // Using [] operator to insert a new key-value pair

    std::cout << "\nAfter inserting new elements:" << std::endl;
    for (const auto& pair : my_map) {
        std::cout << "Key: " << pair.first << " -> Value: " << pair.second << std::endl;
    }

    // Checking if a key exists using find()
    int search_key = 3;
    if (my_map.find(search_key) != my_map.end()) {
        std::cout << "\nKey " << search_key << " found with value: " << my_map[search_key] << std::endl;
    } else {
        std::cout << "\nKey " << search_key << " not found!" << std::endl;
    }

    // Erasing an element using erase()
    std::cout << "\nErasing key 1..." << std::endl;
    my_map.erase(1);

    std::cout << "After erasing key 1:" << std::endl;
    for (const auto& pair : my_map) {
        std::cout << "Key: " << pair.first << " -> Value: " << pair.second << std::endl;
    }

    // Getting the map's size and max size
    std::cout << "\nThe map size is: " << my_map.size() << std::endl;
    std::cout << "The map max size is: " << my_map.max_size() << std::endl;

    // Checking if the map is empty
    if (my_map.empty()) {
        std::cout << "The map is empty!" << std::endl;
    } else {
        std::cout << "The map is not empty." << std::endl;
    }

    return 0;
}
