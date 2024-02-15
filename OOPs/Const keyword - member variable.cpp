#include <iostream>

class MyClass {
private:
    const int constantValue; // Constant member variable

public:
    // Constructor to initialize constant member variable
    MyClass(int value) : constantValue(value) {}

    // Member function to retrieve the constant value
    int getConstantValue() const {
        return constantValue;
    }
};

int main() {
    // Create a MyClass object with constant value 5
    MyClass obj(5);

    // Access and print the constant value
    std::cout << "Constant Value: " << obj.getConstantValue() << std::endl;

    return 0;
}


// output : 5

/*  Explanation of this code : --->
We define a MyClass class with a single constant member variable constantValue.
The MyClass constructor takes an integer parameter value and initializes the constantValue member variable with this value.
The getConstantValue() member function retrieves and returns the value of the constant member variable.
In the main() function, we create a MyClass object obj with a constant value of 5.
We then use the getConstantValue() member function to retrieve and print the constant value.
This example illustrates a basic usage of a constant member variable in a class. The constant member variable constantValue is initialized in the constructor and cannot be modified after initialization, ensuring its immutability throughout the object's lifetime.
*/
