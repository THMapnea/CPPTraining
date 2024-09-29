#include<iostream>

// Base class with virtual functions
class Base {
public:
    // Virtual function that can be overridden in derived classes
    virtual void f1() {
        std::cout << "base::function1" << std::endl;
    }

    // Another virtual function, which can be overridden or left as is in derived classes
    virtual void f2() {
        std::cout << "base::function2" << std::endl;
    }
};

// Derived class that inherits from `Base` and overrides `f1`
class Derived : public Base {
public:
    // Override the `f1` method from the `Base` class
    void f1() override {
        std::cout << "derived::function1" << std::endl;
    }

    // Introduce a new function `f3` specific to `Derived`
    void f3() {
        std::cout << "derived::function3" << std::endl;
    }
};

int main() {
    // Create a pointer to the `Base` class, but assign it an object of the `Derived` class.
    Base* obj = new Derived();
    
    // Call functions using the `Base` pointer.
    // `f1()` is overridden in the `Derived` class, so it will call `Derived::f1()`.
    obj->f1();  // Output: "derived::function1"
    
    // `f2()` is not overridden in `Derived`, so it will call the `Base` version.
    obj->f2();  // Output: "base::function2"
    
    // Note: Even though the `Derived` class has a `f3()` function, we cannot call it
    // using a pointer to the `Base` class, because `f3()` is not defined in `Base`.

    // Free the dynamically allocated memory
    delete obj;

    return 0;
}
