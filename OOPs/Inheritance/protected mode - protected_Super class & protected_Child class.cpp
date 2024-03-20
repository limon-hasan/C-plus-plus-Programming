// Inheritance - member of Super class is in protected mode

// When the member of super class is in protected mode and the child class inherits it from protectedly, the member of the super class will become protected inside the child class and they will be accessible inside the super class and the child class as well but they not be accessible outside the super and child class


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

class Male : protected Human {

public:
	string color;

	Male() {
		cout <<"HELLO" << endl;
	}

	void sleep() {
		cout <<"Male sleeping " << endl;
	}
};

int main() {

	Male m1;
	cout <<"Height is: "<< m1.height << endl;  // This will show a compilation error because height is declared protected there in the child class
}
