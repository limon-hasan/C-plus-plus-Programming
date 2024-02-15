// static member in class -->
/*
Static data members are class members that are declared using static keywords. A static member has certain special characteristics which are as follows:

Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.
It is initialized before any object of this class is created, even before the main starts.
It is visible only within the class, but its lifetime is the entire program.
*/

#include <bits/stdc++.h>
using namespace std;

class Hero {

private:
	int health;

public:
	char level;
	char *name;

	static int timeToComplete;  // "timeToComplete" is a static member
    
	// Default cosntructor
	Hero() {
		cout << "Simple Constructor called" << endl;
		name = new char[100];  // dynamically allocated in the heap, not statically
	}

   	~Hero() {
		cout << "Destructor called" << endl; 
	}
};

int Hero :: timeToComplete = 2;   // "::" this is called scope resolution operator 

int main() {

	cout << Hero :: timeToComplete << endl;  // prints 2

	Hero a;  // Simple Constructor called
	cout << a.timeToComplete << endl;  // 2

	Hero B;  // Simple Constructor called
	B.timeToComplete = 10;
	cout << a.timeToComplete << endl;   // 10
	cout << B.timeToComplete << endl;  // 10

}


// --------------------------------------------------------------------------------



// Accessing static member with an object
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
	B b1, b2, b3;
	A a = b1.getA();  // Here, A is the class type, and a is the variable name.  We are declaring a variable a of type A and initializing it with the value returned by b1.getA().

    A z = b3.getA();
	A y = b2.getA();
	
}

/*
Output : ->
A's constructor called 
B's constructor called 
B's constructor called 
B's constructor called 
*/
