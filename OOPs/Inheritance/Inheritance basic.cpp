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
		cout <<"Color is: " << this->color << endl;  // prints "Color is: " and then blank space because i didn't initialize the string attribute at first
		cout <<"HELLO" << endl;
	}

	void sleep() {
		cout <<"Male sleeping " << endl;
	}

	void setColor(string col) {
		this->color = col;
	}

	string getColor() {
		return this->color;
	}
};

int main() {
	Male object1;  // call the parent class constructor first and then call own class constructor 
	cout << object1.roll << endl;  // 10
 	cout << object1.age <<endl;  // 0 (garbage value)
 	cout << object1.height << endl;  // 0 (garbage value)
 	cout <<"Weight is: "<< object1.weight << endl;  // 0 -> garbage value
   	cout <<"Age is : " << object1.getAge() << endl;  // Age is : 0

 	// cout << object1.color << endl;  // It shows blank space because i didn't initialize string at first
 	object1.setWeight(59);  // set the new weight in setWeight function
 	cout <<"Weight is: "<< object1.weight << endl; // 59

 	object1.sleep();   // calling sleep function 

 	cout <<"Age is : " << object1.getAge() << endl;  // Age is : 0

 	object1.setColor("Yellow");
 	cout <<"Color is: " << object1.getColor() << endl;  // Color is: Yellow
}

// If any member is in private mode in parent class and we inherit that in public mode then it will be not accessible
