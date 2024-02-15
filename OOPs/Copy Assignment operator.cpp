// Copy Assignment constructor -->  When objects are created already and we want to copy one to another then we use copy assignment operator

#include <bits/stdc++.h>
using namespace std;

class Hero {

private:
	int health;

public:
	char level;
	char *name;
    
	// Default cosntructor
	Hero() {
		cout << "Simple Constructor called" << endl;
		name = new char[100];  // dynamically allocated in the heap, not statically
	}

    void setName(char name[]) {
		strcpy(this->name, name);  /* If there two variables like strings and i want to copy one to another then  have to use "strcpy", I cannot use or write like this "this-name = name"
		// this->name = name;         but When dealing with integers or other primitive data types, direct assignment or copying is typically sufficient and safe, as there's no concern for null termination or buffer overflows like there is with character arrays.  */
	}
    
	void print() {
		cout << endl;
		cout << "[ Name: " << this-> name <<", ";
		cout << "Health: " << this->health <<", ";
		cout << "Level: " << level  <<" ]"<< endl;
		cout << endl;
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


	int getHealth() {
		return health;
	}

	char getLevel() {
		return level;
	}

	void setHealth(int h) {
		health = h;
	}

	void setLevel(char l) {
		level = l;
	}

};


int main() {
	Hero hero1;  // prints -> "Simple Constructor called"
	hero1.setHealth(12);
	hero1.setLevel('D');
	char name[6] = "Limon";
	hero1.setName(name);

	hero1.print();   // [ Name: Kimon, Health: 12, Level: D ]
	// copy constructor
	Hero hero2(hero1);
	hero2.name[0] = 'K';
	hero2.print();  // [ Name: Limon, Health: 12, Level: D ]

	// copy assignment operator
	hero1 = hero2;
	hero1.print();   // [ Name: Kimon, Health: 12, Level: D ]
	hero2.print();   // [ Name: Kimon, Health: 12, Level: D ]

}
