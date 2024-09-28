#include<iostream>

// Parent class `Animal` represents a generic animal with a public name and a method to display it.
class Animal {
public:
    std::string name;  // Public member variable to hold the animal's name.

public:
    // Public method to display the animal's name.
    void showName() {
        std::cout << "The animal's name is: " << name << std::endl;
    }
};

// Child class `Duck` inherits from the `Animal` class using the `public` keyword.
// This means that all public members of `Animal` become public members of `Duck`.
class Duck : public Animal {
public:
    // Additional method specific to `Duck` to simulate a quack sound.
    void quack() {
        std::cout << "Quack quack" << std::endl;
    }
};

int main() {
    // Create an object of the `Duck` class.
    Duck my_duck;
    
    // Since `Duck` inherits from `Animal`, we can access and set the `name` attribute inherited from `Animal`.
    my_duck.name = "Adolf";  // Assigning a name to the duck using the inherited property.

    // Call the `showName()` method, which is also inherited from the `Animal` class.
    my_duck.showName();
    
    // The `quack()` method is unique to the `Duck` class and can only be called on a `Duck` object.
    my_duck.quack();

    return 0;
}
