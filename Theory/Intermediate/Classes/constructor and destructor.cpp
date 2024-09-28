#include<iostream>

// Defining a class `Square` that represents a square geometric shape.
class Square {
    // Public members can be accessed from outside the class.
public:
    int l;        // Length of a side of the square.
    int area;     // Area of the square.
    int perimeter; // Perimeter of the square.

    // Public methods for the class.
public:
    // Method to calculate and display the area and perimeter of the square.
    void compute() {
        // Calculate area and perimeter based on the side length `l`.
        area = l * l;
        perimeter = l * 4;
        std::cout << "The area is: " << area << " and the perimeter is: " << perimeter << std::endl;
    }

    // **Constructor**:
    // A constructor is a special member function that is automatically called when an object is instantiated.
    // Here, we define a constructor that initializes the side length `l` to 3 by default.
    Square() {
        l = 3;  // Assigning a default value of 3 to the side length.
    }

    // **Destructor**:
    // A destructor is automatically called when an object goes out of scope or is deleted.
    // It is useful for releasing resources or performing cleanup tasks before the object is destroyed.
    ~Square() {
        std::cout << "The object has been removed at the end of its life cycle." << std::endl;
    }
};

int main() {
    // When an object `s` of type `Square` is created, the constructor is automatically called.
    // This ensures that the side length `l` is initialized, even if we don’t explicitly assign a value.
    Square s;  // Constructor is invoked here.

    // We call the `compute` method, which calculates the area and perimeter of the square.
    s.compute();

    // The destructor will be called automatically when the object `s` goes out of scope, i.e., at the end of the program.
    // You will see a message indicating that the object has been removed (cleaned up).
    
    return 0;  // Destructor is invoked here just before program termination.
}
