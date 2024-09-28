#include<iostream>

// Class `Triangle` represents a triangle with attributes for base, height, and area.
class Triangle {
    // Public members can be accessed directly outside the class.
public:
    int base;      // Base of the triangle.
    int height;    // Height of the triangle.
    int area;      // Area of the triangle.

    // Public method to display triangle details.
public:
    // `virtual` keyword allows this function to be overridden in derived classes if needed.
    // It prints out the values of base, height, and area.
    virtual void show() {
        std::cout << "The base is: " << base << std::endl;
        std::cout << "The height is: " << height << std::endl;
        std::cout << "The area is: " << area << std::endl;
    }

    // **Parameterized Constructor**:
    // This constructor allows the user to initialize the object with specific values for base and height.
    // The initialization list is used to assign values to the member variables directly.
    Triangle(int b, int h) 
        : base{b},          // Initializes `base` with `b`.
          height{h},        // Initializes `height` with `h`.
          area{(b * h) / 2} // Calculates and initializes `area`.
    {
        std::cout << "Class initialized correctly" << std::endl;
    }

    // **Destructor**:
    // This is automatically called when the object is destroyed.
    // It can be useful for cleanup or to release resources.
    ~Triangle() {
        std::cout << "Object eliminated" << std::endl;
    }
};

int main() {
    // **Object instantiation**:
    // When we create an instance of `Triangle` with base 3 and height 4, the constructor is called.
    Triangle t(3, 4);

    // Calling the `show` method to display the triangle’s details.
    t.show();

    // After the `main` function completes, the destructor is automatically called to clean up the object.
    
    return 0;
}
