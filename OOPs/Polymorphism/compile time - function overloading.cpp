// compile time polymorphism

// function overloading --> In function overloading, same function name cannot be declared even if there return type is different but they can be declared if their parameter can be changed
// that means if two functions have same one string variable in their parameter, the functions cannot be overloaded then but if one is 'char' and another one is 'string' then they can be overloaded --> that is called function overloading with different type of arguemetns
#include<iostream>
using namespace std;

class A {
public:
	// function overloading with different numbers of arguemetns
	void sayHello() {
		cout << "Hello Love Babbar " << endl;
	}

	int sayHello(int age, string name) {
		cout << "Limon " << age << " " << name << " " << endl;
		return age;
	}

	// function overloading with different types of arguemetns
	void sayHello(string name) {
		cout << "Hello " << name << endl;
	}

	int sayHello(char name) {
		cout << "BYE " << name << endl;
		return name;
	}

	// Default argument --> it is a value provided in a function declaration automatically assigned by the compiler if the functions called doesnot provide a value for the argument with a default value.
	// However, if arguments are passed while calling the function, the default arguments are ignored
	int sayHello(int x, int y, int z = 0, int w = 4) {
		cout << "Sum is: ";
		return x + y + z + w;
	}
};

int main() {

	A obj;
	obj.sayHello();
	obj.sayHello();
	obj.sayHello("Limon");
	cout << obj.sayHello(20, "rafi") << endl;
	cout << obj.sayHello('a') << endl;
	cout << obj.sayHello(1, 2, 3, 4) << endl;  // 10
	cout << obj.sayHello(1, 2);  // 7

	return 0;
}


// ---------------------------------------



//  Another example: 
#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int age;

    void displayInfo(string name) {
        cout <<"Dhur! "<< name << endl;
    }

    void displayInfo(int age) {
        cout <<"AREEEE "<< age << endl;
    }

    void displayInfo(string name, int age) {
        cout <<"Ore " << name << endl;
        cout <<"MY age "<< age <<" HAHAHA" << endl;
    }


    void displayInfo(string name, string age) {
        cout << name << endl;
        cout << age << endl;
    }
};

int main() {
    Student student;
    student.displayInfo("John");
    student.displayInfo(20);
    student.displayInfo("John", 20);
    student.displayInfo(11);
    student.displayInfo("limon", "rafi");
    student.displayInfo("tamim");

    return 0;
}
