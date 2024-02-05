#include <iostream>
using namespace std;

class Hero {
    
    // properties
	// char name[100];
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

// class jodi empty hoy tokhon size 1 hoye jabe, tokhon object e 1 byte memory allocate hoye jabe
/*
Greedy alignment :->
Greedy alignment, in the context of classes and structures, refers to a strategy where the compiler aligns data members based on the size of the largest member in order to meet the alignment requirements of the target architecture. 
The goal is to align the larger members of the class or structure on boundaries that are multiples of their size.

Example:
class GreedyAlignment {
    char a;      // 1 byte
    double b;    // 8 bytes
    int c;       // 4 bytes
    double d;    // 4 bytes
};

In a compiler using greedy alignment, the compiler would insert padding after the char (a) to align the double (b) on an 8-byte boundary. The resulting memory layout might look like this:

| a (1 byte) | padding (7 bytes) | b (8 bytes) | c (4 bytes) | padding (4 bytes) | d (4 bytes)

total size --> 32 bytes
*/

int main() {

    // creation of object
	Hero himel;
	cout << "Size of himel = " << sizeof(himel) << endl;

	// himel.health = 19;
	himel.level = 'c';
	// himel.setHealth(10);
    
	cout << "Himel health = "<< himel.getHealth() << endl;

    // using setter
	himel.setHealth(70);
	cout << "Himel health = "<< himel.getHealth() << endl;

    cout << "Level is = " << himel.level << endl;
}
