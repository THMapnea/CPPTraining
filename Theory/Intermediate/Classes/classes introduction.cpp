#include<iostream>

// In C++, we can define more complex data types called classes, which can encapsulate both data (attributes) 
// and behavior (methods). Unlike C structs, classes allow for access control using specifiers such as 
// public, private, and protected.

// The concept of classes also introduces Object-Oriented Programming (OOP) paradigms like encapsulation,
// which hides internal details and exposes only the necessary interfaces to the outside world.

// Defining a class `User` to represent a user in the system:
class User {
    // Public members can be accessed from any part of the code, even outside the class.
public:
    std::string user_name;   // This represents the username.
    std::string user_email;  // This stores the user's email.

    // Private members can only be accessed by methods within the class itself or by "friend" classes/functions.
private:
    std::string user_password;  // This stores the user's password, which is kept private and secure.

    // Protected members can be accessed by the class itself, derived classes, or "friends."
protected:
    std::string friends[100];  // Protected array to store the user's friends.

    // Public methods that can perform actions on the class data.
public:
    // A method that prints user information. It accepts an integer parameter as an identifier or value to print.
    void show(int passed_value) {
        std::cout << "The email of account number " << passed_value << " is " 
                  << user_email << " and the associated username is: " << user_name << std::endl;
    }

    // We could also define additional methods to interact with or modify private/protected data.
};

// The `main` function is the entry point of the program.
int main() {
    // Creating a new instance of the `User` class.
    User user_1;

    // Since `user_name` and `user_email` are public members, we can directly access and modify them.
    user_1.user_name = "pino69";  // Assigning a username.
    user_1.user_email = "pinocalamarino@gmail.com";  // Assigning an email.

    // Calling the `show` method, passing 12 as the `passed_value` parameter.
    user_1.show(12);

    // NOTE: Private or protected members like `user_password` or `friends` cannot be accessed directly outside the class.
    // Uncommenting the following lines will cause a compilation error:
    // user_1.user_password = "secret";  // ERROR: 'user_password' is private.
    // user_1.friends[0] = "friend1";    // ERROR: 'friends' is protected.

    return 0;
}
