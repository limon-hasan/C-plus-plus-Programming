#include <iostream>
using namespace std;

class Human {

private:
 int age;

//  int getAge() {
// 	 return age;
//  }

 int getMember() {
	 return age;
 }
};

class Male : private Human {

public:
	// int getAge() {
	// 	return age;
	// }

	void print() {
		int value = getMember();
		value = value + 4;
		cout << "Age is: " << value << endl;   // 'age' can be accessed not directly in the child class like this through member function
	}

	// void print1(int p) {
	// 	age = p;
	// 	cout <<"Age is: " << age << endl;   // This will show error because 'age' is a private member of the super class and it cannot be directly accessed inside the child class though using member function
 	// }
  
};

int main() {

	Male m1;
	// cout << m1.age << endl;  // This will show error becuase private member of the super class cannot be accessed outise the child class and the parent class itself
	// cout <<"Age is: " << m1.getAge() << endl;  // This will show error because 'age' is a private member of the super class and it cannot be accessed outside the parent and child class though using member function
	m1.print();
	// m1.print1(7);
	// Human h1;
	// cout <<"Age is: " << h1.getAge() << endl;
}
