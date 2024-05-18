// C++ Program to illustrate the abstract class and virtual functions

#include <iostream>
using namespace std;

class Base {
	// private member variable
	int x;

public:
	// pure virtual function
	virtual void fun() = 0;

	// getter function to access x
	int getX() { 
 	return x; 
  }
};

// This class inherits from Base and implements fun()
class Derived : public Base {
	// private member variable
	int y;

public:
	// implementation of the pure virtual function
	void fun() override { 
    	cout << "fun() called"; 
  }
};

int main(void)
{
	// creating an object of Derived class
	Derived d;

	// calling the fun() function of Derived class
	d.fun();

	return 0;
}



//-----------------------------------------------------------------


// Another example:

// C++ program that demonstrate that we can have pointers and references of abstract class type.

#include <iostream>
using namespace std;

class Base {
public:
int value = 9;
	// pure virtual function
	virtual void show() = 0;
};

class Derived : public Base {
public:
string name = "limon";

	// implementation of the pure virtual function
	void show()   // If i write 'override' here that will be okay
	{ 
		cout << "In Derived \n"; 
	}
};

int main(void)
{
	// creating a pointer of type
	// Base pointing to an object
	// of type Derived

	Base* bp = new Derived();

	// calling the show() function using the pointer
	bp->show();

	Base* b;
	Derived d;
	b = &d;

	b->show();
	d.show();
	cout << b->value<< endl;
	cout << d.value<< endl;
	// cout << b->name << endl;  // this line will show error
	cout << d.name << endl;

	return 0;
}
