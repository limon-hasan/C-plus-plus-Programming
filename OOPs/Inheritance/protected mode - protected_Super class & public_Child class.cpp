// Inheritance - memebr of the Super class is in protected mode

// When the member of the super class is in protected mode and the child class inherits it from publicly, the member of the super class will become protected inside the child class and they will be accessible wihtin the super class and the child class but not be accessible outside the super and child class


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

	void print(int p) {
		age = p;
		cout << "Now, age is: " << age << endl;
	}
};

int main() {

	Male m1;
	cout <<"Height is: "<< m1.height << endl;  // This will show a compilation error because height is declared protected there in the child class
        m1.print();
}
