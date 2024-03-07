// Inheritance - public mode

#include <iostream>
using namespace std;

class Human {

public:
	int age;
	int height;
	int weight;
	int roll = 10;

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
};

int main() {

	Male m1;
	cout <<"Height is: "<< m1.height << endl;
}
