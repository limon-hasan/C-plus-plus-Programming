#include <iostream>
using namespace std;

class Hero {

private:
	int health;

public:
	char level;
    
	// Default cosntructor
	Hero() {
		cout << "Constructor called" << endl;
	}


    // parameterised constructor
	Hero(int health) {
		this->health = health;
		cout << "this -> " << this << endl;  // "this ->" is a pointer to store the address the current object and it is used to point the same name variable in class like here, level variable is point to another level variable for using "this->"  
	}

	Hero(int health, char level) {
		this->health = health;
		this->level = level;
		cout << "this -> " << this << endl;
	}

	void print() {
		cout << level << endl;
	}

	// getter function (function to access(fetch/read) data member of private class)
	int getHealth() {
		return health;
	}

	char getLevel() {
		return level;
	}

	// setter function (function to modify member of private class)
	void setHealth(int h) {
		health = h;
	}

	void setLevel(char l) {
		level = l;
	}

};


int main() {

	// creation of object
	Hero himel;  // called the constructor --> If i write this line this will automatically create a constructor. And if i write this line but donot write the constructor in the class then it will shows "ERROR"
	Hero hh(10);  // passes through parameterised constructor
	cout <<"Address of himel = " << &himel << endl;  // address of the object 'himel'

	Hero h;  // Constructor called

	// dynamically created object
	Hero *h1 = new Hero;  //Constructor called
	Hero *h2 = new Hero(); // Constructor called
	Hero *h3 = new Hero(11);   // called parameterised constructor
	h3->print();  // prints garbage value because i didn't initialize it before

	Hero temp(10, 'H');
	cout << "Address of temp object = " << &temp << endl;  // prints the temp object address
	temp.print(); // prints 'H'
}
