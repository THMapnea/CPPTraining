#include<iostream>

// Parent class `Shape` that contains a virtual method `area`.
// The method is marked `virtual` to allow derived classes (like Circle and Rectangle) to override it.
class Shape {
public:
    // Virtual method that will be overridden by child classes to calculate the area of specific shapes.
    virtual double area() const {
        return 0;  // Default implementation returns 0, as a generic "Shape" has no area.
    }
};

// First child class `Circle` that inherits from `Shape`.
class Circle : public Shape {
    // Private field to store the radius of the circle.
private:
    double radius;

    // Public method to override the `area()` function from the `Shape` class.
public:
    // Overrides the parent `Shape` class's `area()` method to compute the area of a circle.
    double area() const override {
        return 3.14 * radius * radius;  // Area of a circle formula: π * r^2
    }

    // Constructor that initializes the circle with a specific radius.
    Circle(double r) : radius(r) {}
};

// Second child class `Rectangle` that also inherits from `Shape`.
class Rectangle : public Shape {
    // Private fields to store the dimensions (height and width) of the rectangle.
private:
    double height;
    double width;

    // Public method to override the `area()` function from the `Shape` class.
public:
    // Overrides the parent `Shape` class's `area()` method to compute the area of a rectangle.
    double area() const override {
        return width * height;  // Area of a rectangle formula: width * height
    }

    // Constructor that initializes the rectangle with specific dimensions.
    Rectangle(double w, double h) : width(w), height(h) {}
};

int main() {
    // Creating two objects: a Circle with radius 3, and a Rectangle with width 3 and height 5.
    Circle c(3);
    Rectangle r(3, 5);
    
    // Using a pointer of type `Shape*` to reference different shape objects.
    // First, we point to the `Circle` object.
    Shape* shape_pointer = &c;

    // When we call `area()` using the `shape_pointer`, the Circle's area function is called due to polymorphism.
    std::cout << "The circle area is: " << shape_pointer->area() << std::endl;
    
    // Now, we reassign the pointer to point to the `Rectangle` object.
    shape_pointer = &r;

    // Calling `area()` again will now invoke the Rectangle's overridden `area()` method.
    std::cout << "The area of the rectangle is: " << shape_pointer->area() << std::endl;
    
    // This demonstrates polymorphism: the ability to call the same method (`area()`)
    // on different types of objects (Circle, Rectangle) and get the correct behavior based on the actual object type.
    
    return 0;
}
