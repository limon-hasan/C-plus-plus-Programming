// Inheritance - member of Super class is in protected mode

/* When the member of super class is in protected mode and the child class inherits it from protectedly, 
the member of the super class will become protected inside the child class and they will be accessible inside the super class and the child class as well but they not be accessible outside the super and child class. 


In the child(Male) class, you've used protected inheritance, which means all public members of parent(Human) class become protected in child(Male),
and all protected and private members remain protected and private, respectively.
*/

//  protected members of a parent class are accessible directly in the child class and the parent class also.

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

	void printing(int y) {
		height = y;
		cout <<"OKAY, now Height is: " << height<< endl;
	}

	Human(int y) {
		cout << "Number is " << y << endl;
	}

};

class Male : protected Human {

public:
	string color;

	Male() {
		cout <<"HELLO" << endl;
	}

	void print() {
		printing(22);
	}

	Male(int x) {
		height = x;
		cout << "height is: " << height << endl;  /*  Here, though 'height' become the protected member of the child(Male) class, it can be accessible in the child class 
		                                              because it member inheriting protectedly can be acessible in the child class but not in the case of inheriting privately  */
	}
};

int main() {
    
        Human h1(90);  // prints -->  "Number is 90"
	Male m1;   // called the parent class(Human) constructor first and then call the own constructor and prints "HI. Weight is: 48. HELLO " --> these three lines
	m1.print();  // prints "OKAY, now Height is: 22"
	Male m2;  // called the parent class(Human) constructor first and then call the own constructor and prints "HI. Weight is: 268501009. HELLO "
	Male m3(45);   // prints "height is: 45"
}
