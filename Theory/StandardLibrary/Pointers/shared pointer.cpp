#include<iostream>
#include<memory>

// Define a simple class that will demonstrate constructor and destructor calls
class MyClass {
    public:
        // Constructor
        MyClass() {
            std::cout << "The constructor has been called" << std::endl;
        }
        
        // Destructor
        ~MyClass() {
            std::cout << "The destructor has been called" << std::endl;
        }
};

int main() {
    // Create a shared pointer to an instance of MyClass (heap-allocated)
    std::shared_ptr<MyClass> sh_ptr(new MyClass()); // Constructor is called here

    {
        // Create another shared pointer that shares ownership of the same object
        std::shared_ptr<MyClass> sh_ptr2 = sh_ptr;
        
        std::cout << "In the inner scope" << std::endl;
        // At this point, both sh_ptr and sh_ptr2 are managing the same object,
        // and the reference count is 2.
    } // sh_ptr2 goes out of scope here, and the reference count decreases to 1.
    
    std::cout << "In the outer scope" << std::endl;
    // The object is still alive because sh_ptr is still managing it.
    
    // When main ends and sh_ptr goes out of scope, the reference count becomes 0, and the object is destroyed.
    
    return 0;
} // Destructor is called here when sh_ptr is destroyed, and no other shared pointers exist.
