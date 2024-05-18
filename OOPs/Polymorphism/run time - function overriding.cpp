// run time time polymorphism -->  also known as dynamic polymorphism
// Method overriding

/*
Method overriding: -->  Method overriding is a way to implement runtime polymorphism.
Method overriding is a feature that allows you to redefine the parent class method in the child class based on its requirement. 
In other words, whatever methods the parent class has by default are available in the child class.
But, sometimes, a child class may not be satisfied with parent class method implementation. 
The child class is allowed to redefine that method based on its requirement. This process is called method overriding. 


Rules for method(function) overriding: -->
--> It is possible through inheritance only
--> the method of the child and parent class must have the same parameter and same name of method
*/

#include<iostream>
using namespace std;

class Parent {
public:
   	virtual void show() {
		cout <<"Inside parent class " << endl;
	}
};

class subclass1 : public Parent {
public:
	void show() {
		cout <<"Inside subclass1" << endl;
	}

};

class subclass2 : public Parent {
public:
	void show() {
		cout << "inside subclass2" << endl;
	}
};

int main() {

	subclass1 a1 ;
	subclass2 a2 ;
	a1.show();	
	a2.show();	

	Parent* p = &a1;
	p->show();   // If i write 'virtual' before this parent class function in the parent class then this line will show child class function otherwise it will show parent class function
	                     // And If i write "p->Parent::show()" line then it will show always parent class function whther i write 'virtual' before the parent class function in the parent class 
	p->Parent::show();
	a1.show();  // show the child class function
	a1.Parent::show();   // show the parent class function
	a2.Parent::show();   // show the parent class function
	a1.subclass1::show();  // show the child class function
	a2.subclass2::show();  // show the child class function

    // p->subclass1::show();   // this line will show error because 'subclass1' is not a base of 'Parent'              


	return 0;
}
