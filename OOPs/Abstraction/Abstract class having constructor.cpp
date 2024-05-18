// Example - 1

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



// ----------------------------------------------



// Example - 2
#include <iostream>
using namespace std;

class Example {
private:
    int x;
    int y;
    int z;

public:
    // Constructor with two parameters
    Example(int a, int b) : x(a), y(b), z(78) {
        cout << "Base constructor with two parameters called." << endl;
    }

    // Constructor with one parameter
    Example(int a) : x(a), y(11), z(12) {
        cout << "Base constructor with one parameter called." << endl;
    }

    void print() {
        cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    }
};

class Derived : public Example {
private:
    int w;

public:
    // Derived class constructor
    Derived(int a, int b, int c) : Example(a, b), w(c) {
        cout << "Derived constructor with three parameters called." << endl;
    }

    Derived(int a, int c) : Example(a), w(c) {
        cout << "Derived constructor with two parameters called." << endl;
    }

    void print() {
        // Call the base class print function
        Example::print();
        cout << "w = " << w << endl;
    }
};

int main() {
    // Creating objects of the Derived class
    Derived obj1(10, 20, 30);
    Derived obj2(60, 40);

    obj1.print();  // Output: Base and Derived class members
    obj2.print();  // Output: Base and Derived class members

    return 0;
}

