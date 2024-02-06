#include <iostream>
using namespace std;

class Hero {

	// properties
private:
	int health;

public:
	char level;

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

	// static allocation
	Hero a;
	a.setHealth(20);
	a.setLevel('J');
	cout << "Level is " <<a.level << endl;
	cout << "Level is " << a.getLevel() << endl;
	cout << "Health is " << a.getHealth() << endl;

	// dynamic allocation
	Hero *b = new Hero;
	b->setHealth(90);
	b->setLevel('D');

	cout << "Level is " << (*b).level << endl;  // D
	cout <<"Health is " << (*b).getHealth() << endl;  // 90

	b->level = 'F';
	cout << "Level is " << b->level << endl;  // F -> prints value because of de-reference of pointer 
	cout << "Health is " << b->getHealth() << endl;  // 90 -> prints value because of de-reference of pointer 
    
	(*b).level = 'G';
	(*b).setHealth(100);
	cout << "Level is " << b->level << endl;  // G -> prints value because of de-reference of pointer 
    cout << "Health is " << b->getHealth() << endl; // 100
    cout << "Level is " << (*b).level << endl;   // G
    cout << "Health is " << (*b).getHealth() << endl;  // 100
}
