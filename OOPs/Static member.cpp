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
