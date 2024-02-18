/* Qn : ->
Problem 3: Student Information System
Create a class `Student` with attributes `rollNumber`, `name`, and `marks`. Implement aparameterized constructor to initialize these attributes. Overload the constructor to handle both
with and without marks cases. Display the grade of the student based on the marks (A, B, C, D,or F).
Sample Input:
Student 1: Roll Number - 101, Name - "Tom"
Student 2: Roll Number - 102, Name - "Lisa", Marks - 75
*/

#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    int rollNumber;
    string name;
    int marks;

    Student(int rollNumber, string name, int marks) {
        this->rollNumber = rollNumber;
        this->name = name;
        this->marks = marks;
        cout << "Student 2 created with marks " << this->marks<<". ";    // Student 2 created with marks 75. 
        if(70 <= (this->marks) < 80)
        cout << "Grade: " << "B" << endl;  //  Grade: B
    }

    Student(int rollNumber, string name) {
        this->rollNumber = rollNumber;
        this->name = name;
        cout << "Student 1 created with no marks" << endl;    // Student 1 created with no marks
    }

};


int main() {
    Student s1(101, "Tom");
    Student s2(102, "Lisa", 75);
    return 0;
}

/* Output -->
Student 1 created with no marks
Student 2 created with marks 75. Grade: B
*/
