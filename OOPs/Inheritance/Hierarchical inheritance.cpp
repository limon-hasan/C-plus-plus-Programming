// Hierarchical inheritance --> one class serves as parent class for more than one class

// Example: 1
#include<iostream>
using namespace std;
//Hierarchical Inheritance
class A {

    public:
    void func1() {
        cout << "Inside Funcion 1" << endl;
    }

};

class B: public A {
    public:
    void func2() {
        cout << "Inside Funcion 2" << endl;
    }
};

class C: public A {
    public:
    void func3() {
        cout << "Inside Funcion 3" << endl;
    }
};

int main() {

    A object1;
    object1.func1();

    B object2;
    object2.func1();
    object2.func2();

    C object3;
    object3.func1();
    object3.func3();

    return 0;
}



// --------------------------------------



// Example - 2
#include<iostream>
using namespace std;

class Shape{
public:
	int sides;
	string name;

	public:
	Shape(string name, int sides) {
		this->name = name;
		this->sides = sides;
	}
};
class triangle: public Shape{
	int height;
	int base;
public:
	triangle(string name, int sides, int base, int height) : Shape(name, sides) {
		this->base  =base;
		this->height = height;
	}

	void area() {
		cout <<"area of triangle: " << 0.5 * base * height << endl;
	}
	void details() {
		cout << "Sides: " << sides << endl;
		cout <<"name: " << name << endl;
		cout << "base: " << base << endl;
		cout << "height: " << height << endl;
		area();
	}
};

class square: public Shape{
	private:
		int height;
public:

	square(string name, int sides, int height) : Shape(name, sides) {
		this->height = height;
	}

	void area() {
		cout <<"area of square: " << height * height << endl;
	}
	void details() {
		cout << "Sides: " << sides << endl;
		cout <<"name: " << name << endl;
		cout << "height: " << height << endl;
		area();
	}
};

int main() 
{ 
    // Creating objects 
    triangle t("triangle", 3, 2, 3); 
    square s("square", 4, 2); 
  
    t.details();
    cout << endl;

    s.details();
    cout << endl;
}
