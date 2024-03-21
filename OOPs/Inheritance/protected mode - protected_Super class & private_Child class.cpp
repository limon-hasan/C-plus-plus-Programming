// Inheritance - member of Super class is in protected mode

/* When the member of super class is in protected mode and the child class inherits it from privately, 
the member of the super class will become private inside the child class and they will be accessible inside the super class and the child class as well but they not be accessible outside the super and child class
*/

#include <iostream>
using namespace std;

class Human {

private:
	int age;
protected:
	int height;
public:
	int weight = 9;
public:
	Human() {
		cout <<"HI" << endl;
		cout << "Weight is: "<< this->weight << endl;
	}
	
	void smart() {
		cout << "Weight is: " << this->weight << endl;
	}

	void printing(int y) {
		height = y;
		cout <<"OKAY, NOW Height is: " << this->height<< endl;
	}

	Human(int y) {
		cout << "Number is " << y << endl;
	}
};

class Male : private Human {

public:

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

	void print2(int z) {
		height = z;
		cout << "Now, Height is: " << height << endl;
	}

  /*    Error showing --> 
	void print3(int p) {
		age = p;  // here, age is a private member that's why it cannot be accsessible in the child class
		cout << "Age is: " << age << endl;  // It will show a compilation error because of private member(age)
	}   */
};

int main() {
    
    	Human h1(90);  // prints -->  "Number is 90"
	Male m1;   // called the parent class(Human) constructor first and then call the own constructor and prints "HI. Weight is: 48. HELLO " --> these three lines
	m1.print();  // prints "OKAY, now Height is: 22"
	Male m2;  // called the parent class(Human) constructor first and then call the own constructor and prints "HI. Weight is: 268501009. HELLO "
	Male m3(45);   // prints "height is: 45"
	h1.smart();
	// m1.smart();   // It will show error because printing() is a member function of parent class but we inherit it in the child class privately 
	m1.print2(178);
	// m1.print3(111); 
	// m1.printing(65);   // It will also show error because printing() is a member function of parent class but we inherit it in the child class privately 
	h1.printing(23);   
}
