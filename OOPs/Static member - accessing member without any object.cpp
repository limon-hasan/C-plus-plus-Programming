// Accessing static member without any object
#include <iostream>
using namespace std;

class A {
	int x;  // declared in private

	public:
	A() {
		cout << "A's constructor called" << endl;

	}
};

class B {
	// Declaring static member
	static A a;  //  the statement declares a static member variable named a of type A within the class B. Since it is declared as static, it belongs to the class B rather than any individual object of class B.

	public:
	B() {
		cout <<"B's constructor called" << endl;
	}

    // static member function
	// A is the return type of the function. In this case, the function returns an object of type A.
	static A getA()  // This "static" keyword declares the member function getA() as a static member function of class B.
	{                // Static member functions belong to the class rather than individual objects. They can be called without creating an instance of the class.
		return a;  // This statement returns the static member 'a' of class B. Since a is a static member variable of class B, it can be accessed directly within the static member function without the need for an object.
	}
};

// Declaration of static member --> The definition of a static member variable, which includes memory allocation, must be provided outside the class.
A B :: a;  // Here, A is a type of static member 'a' and 'B' is the class of the static member. This line tells the compiler to allocate memory for the static member variable a of class B of type A.

int main()
{
	A a = B::getA();  // The :: operator is the scope resolution operator, used to access static members of a class without creating an instance of the class. B::getA() directly accesses the static member function getA() of class B without needing to create an object of class B.
    // Since getA() returns an object of type A, the returned object is used to initialize variable a.	
}
/*
So, in summary, the line A a = B::getA(); creates an object of class A and initializes it with the object returned by the static member function getA() of class B.  
*/

/*
Output : ->
"A's constructor called" 
Explanation : -->
When the program starts, it creates an object of class A implicitly during the initialization of the variable a in the main() function.
This triggers the constructor of class A, resulting in the output "A's constructor called ".
The constructor of class B is not explicitly called in the main() function, so the output "B's constructor called" is not printed.
*/
