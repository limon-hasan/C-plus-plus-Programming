// compile time polymorphism -- Static polymorphism

// operator overloading
#include<iostream>
using namespace std;

class B {
public:
	int a;
	int b;
	int c;

	// (+) overloading
	void operator+ (B &obj) {
		int value1 = this->b;
		int value2 = obj.c;
		cout <<"Output: " << value1 - value2 << endl;

		cout <<"HEllo Limon " << endl;
	}

	// bracket() overloading
	void operator() () {
		cout <<"I am bracket " << this->a << endl;
	}

	void operator- (B &obj) {
		int value1 = this->a;
		int value2 = obj.b;
		cout <<"Output: " << value1 * value2 << endl;
	}
};

int main() {

	B obj1, obj2, obj3;
	obj1.a = 10;
	obj2.b = 3;
	obj3.c = 1;

	// (+) overlaoding
	obj2 + obj3;
	obj1 - obj2;

	// bracket overloading
	obj1();

	return 0;
}
