// Inheritance 

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
	Male() {
		cout <<"HELLO" << endl;
	}
	string color;

	void sleep() {
		cout <<"Male sleeping " << endl;
	}
	
};

int main() {
	Male object1;  // call the parent class constructor first and then call own class constructor 
	cout << object1.roll << endl;
 	cout << object1.age <<endl;
 	cout << object1.height << endl;
 	cout <<"Weight is: "<< object1.weight << endl;

 	cout << object1.color << endl;
 	object1.setWeight(59);
 	cout <<"Weight is: "<< object1.weight << endl;

 	object1.sleep();
}
