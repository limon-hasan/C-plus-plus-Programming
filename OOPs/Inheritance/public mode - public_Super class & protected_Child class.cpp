// Inheritance - public mode of super class and protected mode of child class

// protected mode -> similiar private
// In this case, the data member in public of super class can only be accessible inside this own(super) class and the child class also but not outside the super class
// But, the data member in public of child class can be accessible inside this child class and outside the child class

// protected memeber can only be accessible in the own class and the child clas


#include <iostream>
using namespace std;

class Human {

public:
	int age;
	int height;
	int weight;
	int roll = 10;

	Human() {
		cout << "HI" << endl;
		cout << "Weight is: " << this->weight << endl;
	}

	int getAge() {
		return this->age;
	}

	void setWeight(int w) {
		this->weight = w;
	}

	void setHeight(int height) {
		this->height = height;
	}

	int getHeight() {
		return this->height;
	}
};

class Male : protected Human {

public:
	string color;

	Male() {
		cout << "HELLO" << endl;
	}

	void setColor(string color) {
		this->color = color;
	}

	void sleep() {
		cout << "Male sleeping " << endl;
		cout << "Color is: " << this->color << endl;
	}

	string getColor() {
		return this->color;
	}

	void setHeight(int height) {
		this->height = height;
	}

	int getHeight() {
		return this->height;
	}
	void getHeight1() {
		cout << "Height is: " << this->height << endl;
	}
};

int main() {

	Male m1;
	// cout << m1.height << endl;  // this line shows error because we want to inherit through protected outside of the class

	cout << "Color is: " << m1.color << endl;  // Color is: 
	m1.setColor("Green");
	m1.sleep();  // call sleep function
	cout << "Yes, " << m1.getColor() << endl;  // Color is: Green
	m1.setHeight(80);
	cout << "Height is: "<< m1.getHeight() << endl;  // Height is: 80
	m1.getHeight1();

	Human h1;  // call the constructor of human class and prints whatever inside of that comstructor
	cout << h1.getHeight() << endl;  // Height is: 80
}
