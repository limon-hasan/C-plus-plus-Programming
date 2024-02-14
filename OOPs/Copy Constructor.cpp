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

    // creating copy constructor  --> when we create our own copy constructor then automaticlly by default copy constructor in class will be removed
    Hero(Hero& temp)  // Passing by reference avoids making unnecessary copies and prevents the infinite recursion caused by repeatedly invoking the copy constructor. 
	              /*   Avoiding Infinite Recursion: If you pass the object by value (i.e., without reference), it would call the copy constructor again to make a copy of the parameter. 
				       This would lead to infinite recursion, as it would keep making copies of the object indefinitely.      */
	{      
		cout << "Copy constructor called" << endl;
		this->health = temp.health;  // copying one's object element into another object
		this->level = temp.level;  // when you access members of an object via a reference, you use the dot operator (.), not the arrow operator (->).
    } 

	void print() {
		cout << "Health = " << this->health << endl;
		cout << "Level = " << level << endl;
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

	Hero S(10, 'P');
    S.print();

    // Copy Constructor --> copy constructor means copying object 
	Hero R(S);   // called copy constructor
	R.print();

}
