// Inheritance - public mode of super class and private mode of child class
/*
When a class inherits privately from another class, all public members of the base class become private members of the derived class.
However, they are still accessible within member functions of the derived class itself.
*/

#include <iostream>
using namespace std;

class Human {

public:
	int age;
	int height;
	int weight;
	int roll = 10;
	int debate = 220;
	int health = 44;

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

class Male : private Human {

public:
	string color;

	Male() {
		cout << "HELLO" << endl;
		cout << "Age is : " << this->age << endl;
		debate = 188;
		cout <<"Debate is: " << debate << endl;
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
    
    Male(int y) {
    	cout << "Health is : " << health << endl;  // Health is : 44
    	health = y;
    	cout <<"Health is : " << health << endl;  // Health is : 770
    }
};

int main() {

	Male m1;

	cout << "Color is: " << m1.color << endl;  // Color is:
	m1.setColor("Green");
	m1.sleep();  // call sleep function
	cout << "Yes, " << m1.getColor() << endl;  // Color is: Green
	m1.setHeight(80);
	cout << "Height is: " << m1.getHeight() << endl; // Height is: 80
	m1.getHeight1();

	Human h1;  // call the constructor of human class and prints whatever inside of that comstructor
	cout << h1.getHeight() << endl;  // Height is: 80
    
	Male m2(770);
}
