// C++ program to demonstrate that
// an abstract class can have constructors.

#include <iostream>
using namespace std;

// An abstract class with constructor
class Base {
protected:
	// protected member variable
	int x;

public:
	// pure virtual function
	virtual void fun() = 0;

	// constructor of Base class
	Base(int i)
	{
		x = i;
		cout << "Constructor of base called with " << x <<endl;
	}
	
};

class Derived : public Base {
	// private member variable
	int y;
	int z;

public:
	// calling the constructor of Base class
	Derived(int i, int j) : Base(i) {
		y = j;
	}

	Derived(int p) : Base(p) {
		z = p;
		cout <<"HELLO " << z << endl;
	}

	// implementation of pure virtual function
	void fun () {
		cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
	}
};

int main(void)
{
	// creating an object of Derived class
	Derived d(4, 5);

	// calling the fun() function of Derived class
	d.fun();

	// creating an object of Derived class using a pointer of the Base class
	Base* ptr = new Derived(6, 7);

	// calling the fun() function using pointer
	ptr->fun();

	Base* b = new Derived(90);
	b->fun();

	return 0;
}
