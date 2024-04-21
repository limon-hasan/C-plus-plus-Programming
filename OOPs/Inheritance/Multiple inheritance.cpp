// OOP Assignment Problem- 3: Multiple Inheritance Problem --->

/* Qn:-->
 Suppose you're developing a student management system for a school. Define a base class called `Student` with properties like `name` and `rollNumber`, representing basic student information. 
 Create another base class `Test` with properties like `marks` and `grade`, representing test results. 
 Derive a class `Result` from both `Student` and `Test` to represent combined student information and test results. 
 Implement member functions to input student details and test marks, and to display the student's name, roll number, marks, and grade. 
 Test your code by creating objects representing student results.
*/

#include<iostream>
using namespace std;

class Student {

protected:
	string name;
	int rollNumber;

public:
	void getStudent(string Name, int roll) {
		name = Name;
		rollNumber = roll;
	}
};

class Test {

protected:
	int marks;
	char grade;

public:
	void getTest(int testMarks, char Grade) {
		marks = testMarks;
		grade = Grade;
	}
};

class Result : public Student, public Test {

public:
	void details() {
		cout <<"Student's name: " << name << endl;
		cout <<"Students roll: " << rollNumber << endl;
		cout <<"Students marks: " << marks << endl;
		cout << "Student grade: " << grade << endl;
	}
};

int main() {
	Result r1;

	r1.getStudent("Rain", 22);
	r1.getTest(199, 'A');
	r1.details();
}



// --------------------------------------------------------------------------



// Normal problem -->
#include<iostream>
using namespace std;

class Animal {
public:
	int age;
	int height;

	void bark() {
		cout << "Barking" << endl;
	}

};

class Human {
public:
	void speak() {
		cout <<"Speaking" << endl;
	}
};

class Hybrid : public Human, public Animal {

};

int main() {
	Hybrid d;
	d.speak();
	d.bark();
	
}
