//   1. Constant Variables:
#include <iostream>

int main() {
    const int x = 5;
    // x = 10; // Error: Attempting to modify a const variable
    std::cout << "x: " << x << std::endl;
    return 0;
}
/*  Here, x is a constant variable initialized to 5. Any attempt to modify x after initialization will result in a compilation error.   */



// 2. Constant Pointers:
#include <iostream>

int main() {
    int y = 10;
    const int* ptr1 = &y; // Pointer to constant value
    // *ptr1 = 20; // Error: Attempting to modify a const value through pointer

    int* const ptr2 = &y; // Constant pointer
    *ptr2 = 20; // Valid: Modifying the value pointed to by the const pointer
    std::cout << "y: " << y << std::endl;

    return 0;
}
/*  In this example, ptr1 is a pointer to a constant integer value, meaning we cannot modify the value pointed to by ptr1.
On the other hand, ptr2 is a constant pointer to an integer, meaning we cannot change the memory address it points to.  */




// 3. Constant Member Functions:
#include <iostream>

class MyClass {
public:
    void foo() const {
        std::cout << "foo() const called" << std::endl;
    }

    void bar() {
        std::cout << "bar() called" << std::endl;
    }
};

int main() {
    const MyClass obj1;
    obj1.foo(); // Allowed: Calling a const member function on a const object

    MyClass obj2;
    obj2.foo(); // Allowed: Calling a const member function on a non-const object

    // obj1.bar(); // Error: Attempting to call a non-const member function on a const object
    obj2.bar(); // Valid: Calling a non-const member function on a non-const object

    return 0;
}

/*  In this example, foo() is a const member function of MyClass, which means it promises not to modify any member variables of the class.
Therefore, it can be called on both const and non-const objects. bar() is a non-const member function, and it can only be called on non-const objects.  */
