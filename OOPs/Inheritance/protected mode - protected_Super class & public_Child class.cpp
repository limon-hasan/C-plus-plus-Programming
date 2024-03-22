// Inheritance - memebr of the Super class is in protected mode

// When the member of the super class is in protected mode and the child class inherits it from publicly, the member of the super class will become protected inside the child class and they will be accessible wihtin the super class and the child class but not be accessible outside the super and child class
//  protected members of a parent class are accessible directly in the child class and the parent class also.

#include <iostream>
using namespace std;

class Human {

protected:   // protected mode
	int age;
protected:   // protected mode
	int height;
public:
	int weight;

public:
	Human() {
		cout <<"HI" << endl;
		cout << "Weight is: "<< this->weight << endl;
	}

	int getAge() {
		return this->age;
	}

	void setWeight(int w) {
		this->weight = w;
	}

        int getMember() {
	 return age;
 	}
};

class Male : public Human {

public:
	string color;

	Male() {
		cout <<"HELLO" << endl;
	}

	void sleep() {
		cout <<"Male sleeping " << endl;
	}

	int getAge() {
		return age;
	}

	void print(int p) {
		age = p;
		cout << "Now, age is: " << age << endl;
	}

        void print1(int p) {
		age = p;
		cout <<"Age is: " << age << endl;   // This will show error because 'age' is a private member of the super class and it cannot be directly accessed inside the child class though using member function
 	}
};

int main() {

	Male m1;
	cout <<"Height is: "<< m1.height << endl;  // This will show a compilation error because height is declared protected in the child class
	cout <<"Age is: " << m1.age << endl;  // This will show error becuase protected member of the super class cannot be accessed outise the child class and the parent class itself
	cout <<"Age is: " << m1.getAge() << endl;   // "Age is: 0"
	m1.print();
	m1.print1(7);
	
	Human h1;
	cout <<"Age is: " << h1.age << endl;
}
