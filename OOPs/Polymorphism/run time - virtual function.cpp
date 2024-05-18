// C++ Program to demonstrate the Virtual Function

// Example: 1 -->
#include <iostream>
using namespace std;

// Declaring a Base class
class GFG_Base {

public:
	// virtual function
	virtual void display()
	{
		cout << "Called virtual Base Class function" << "\n\n";
	}

	 void print()
	{
		cout << "Called GFG_Base print function" << "\n\n";
	}
};

// Declaring a Child Class
class GFG_Child : public GFG_Base {

public:
	void display()
	{
		cout << "Called GFG_Child Display Function" << "\n\n";
	}

	void print()
	{
		cout << "Called GFG_Child print Function" << "\n\n";
	}
};

int main()
{
	// Create a reference of class GFG_Base
	GFG_Base* base;

	GFG_Child child;

	base = &child;

	// This will call the virtual function
	base->GFG_Base::display();  // show base class function
	child.GFG_Base::display();  // show base class function

	base->display();  // show child class function
	
	child.GFG_Child::display();  // show child class function
    // base->GFG_Child::display();   // this line will show error because 'GFG_Child' is not a base of 'GFG_Base'


	// this will call the non-virtual function
	base->print();  // show base class function if donot write 'virtual' before the base class function in the base class but if i write 'virtual' then this line will show child class function
	child.print();  // show child class function


	base->GFG_Base::print();   // show parent class function 
	// base->GFG_Child::print();  // this line will show error because ‘GFG_Child’ is not a base of ‘GFG_Base’
	
	child.GFG_Base::print();  // show parent class function
}



// -------------------------------------------------------------



// Example: 2 -->
// virtual function overriding

#include <bits/stdc++.h>
using namespace std;

class base {
public:
	virtual void print()
	{
		cout << "print base class" << endl;
	}

	void show() { cout << "show base class" << endl; }
};

class derived : public base {
public:
	// print () is already virtual function in
	// derived class, we could also declared as
	// virtual void print () explicitly
	void print() { cout << "print derived class" << endl; }

	void show() { cout << "show derived class" << endl; }
};

// Driver code
int main()
{
	base* bptr;
	derived d;
	bptr = &d;

	// Virtual function, binded at
	// runtime (Runtime polymorphism)
	bptr->print();

	// Non-virtual function, binded
	// at compile time
	bptr->show();  // this will show the base class function because show() is not the virtual function



	bptr->base::print();  // shows the base class function
	// bptr->derived::print();  // this line shows error 
	d.base::print();  // shows the base class function
	d.derived::print();  // shows the child class function
	d.print();  // shows the child class function

  
  bptr->base::show();  // shows base class function
	// bptr->derived::show();  // this line shows error because ‘derived’ is not a base of ‘base’
	d.base::show();  // shows base class function
	d.derived::show();  // shows child class function

	return 0;
}
