// Deep copy constructor

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

    // In deep copy, we created entirely two dfferent array
    Hero(Hero& temp)  // Passing by reference avoids making unnecessary copies and prevents the infinite recursion caused by repeatedly invoking the copy constructor. 
	                 /*  Avoiding Infinite Recursion: If you pass the object by value (i.e., without reference), it would call the copy constructor again to make a copy of the parameter. 
				         This would lead to infinite recursion, as it would keep making copies of the object indefinitely.      */
	{      
		char *ch = new char[strlen(temp.name) + 1]; // created a new "ch" character array with size of "name" array
		strcpy(ch, temp.name); // copying all elements of ch array to name array
		this->name = ch;  // "this->name = ch" is updating the name pointer of the current object to point to the newly allocated memory (ch). This ensures that the copied object has its own independent copy of the name array.
		                 /*  If i donot write this above line"this->name = ch", the pointer this->name is not updated to point to the newly allocated memory. 
		                     This means that this->name retains its uninitialized value or points to some random location in memory, rather than pointing to the newly allocated memory for the copied name array.   */
		cout << "Copy constructor called" << endl;
		this->health = temp.health;  // copying one's object element into another object
		this->level = temp.level;   // when you access members of an object via a reference, you use the dot operator (.), not the arrow operator (->).
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
    Hero *h1 = new Hero; // called consructor
	Hero hero1;
	hero1.setHealth(12);
	hero1.setLevel('D');
	char name[6] = "Limon";
	hero1.setName(name);
	hero1.print();  // [ Name: Limon, Health: 12, Level: D ]


	// Deep copying  --> In deep copy, we created entirely two dfferent array
	Hero hero2(hero1);  // I can write this as well --> Hero hero2 = hero1
	hero2.print();  // [ Name: Limon, Health: 12, Level: D ]

	hero1.name[0] = 'K';
	
	hero1.print();   // [ Name: Kimon, Health: 12, Level: D ]
	hero2.print();   // [ Name: Limon, Health: 12, Level: D ]
}
