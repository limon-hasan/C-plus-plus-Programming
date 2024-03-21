// Inheritance - memebr of the Super class is in private mode

// When the member of the super class is in private mode and the child class inherits it from publicly, private member will remain private within the child(Male) class and they will be accessible wihtin the super class and the child class but not be accessible outside the super and child class
// In C++, private members of a parent class cannot be directly accessed in a child class, regardless of the type of inheritance used (public, protected, or private).

#include <iostream>
using namespace std;

class Human {

private:
	int age;
protected:
	int height;
public:
	int weight;

public:
	Human() {
		cout << "HI" << endl;
		cout << "Weight is: " << this->weight << endl;
	}

	int getAge() {
		return this->age;
	}
};

class Male : public Human {

public:
	string color;

	Male() {
		cout << "HELLO" << endl;
	}

	void sleep() {
		cout << "Male sleeping " << endl;
	}

	// This following part will show error :-->
	void print(int p) {
		age = p;
		cout << "Now, age is: " << age << endl;  // this will show compilation error --> because 'age' is a private member in the parent(Human) class that's why it cannot be accessible directly in the child(Male) class
	}                                               // private members of a parent class cannot be directly accessed in a child class
};

int main() {

	Male m1;
	// cout <<"Height is: "<< m1.height << endl;  // This will show a compilation error because height is declared protected there in the child class

	// cout << m1.age << endl;   // this will show compilation error
	Human h1;
	cout << "Age is: " << h1.getAge() << endl;  // Age is: 32759
	cout << "Age is: " << m1.getAge() << endl;  // Age is: 0  --> this line shows error if the child(Male) class inherits the private/protected data member of the super(Human) class privately/protectedly

	m1.print(30);  // this will show compilation error
}
