#include<iostream>

// Base class `Animal` with a virtual function `makeSound`.
// The `virtual` keyword allows derived classes (like `Duck` and `Crocodile`) to override this function.
class Animal {
public:
    // The `makeSound` method is virtual, meaning it can be redefined in derived classes.
    virtual void makeSound() {
        std::cout << "SOUND FX" << std::endl;  // Default sound for a generic animal.
    }
};

// Derived class `Duck` inherits from `Animal` and overrides the `makeSound` method.
class Duck : public Animal {
public:
    // Overriding the `makeSound` method to provide a custom sound for `Duck`.
    void makeSound() override {
        std::cout << "quack quack" << std::endl;  // Specific sound for a duck.
    }
};

// Derived class `Crocodile` also inherits from `Animal` and overrides the `makeSound` method.
class Crocodile : public Animal {
public:
    // Overriding the `makeSound` method to provide a custom sound for `Crocodile`.
    void makeSound() override {
        std::cout << "nobody knows" << std::endl;  // Specific "sound" for a crocodile.
    }
};

int main() {
    // Create objects for both the `Duck` and `Crocodile` classes.
    Duck my_duck;
    Crocodile my_crocodile;
    
    // Even though the `makeSound` method has the same name, the correct version is called
    // based on the object type (`Duck` or `Crocodile`), due to method overriding.
    my_duck.makeSound();       // Calls `makeSound()` from the `Duck` class.
    my_crocodile.makeSound();  // Calls `makeSound()` from the `Crocodile` class.
    
    return 0;
}
