// (5)  -->
/*
Qn : -->
Problem 5: Employee Management System
Create a class `Employee` with attributes `employeeID`, `name`, and `salary`. Implement a parameterized constructor to initialize these attributes.
Overload the constructor to handle both with and without salary cases. Create a method to calculate and display the annual salary (12 times the monthly salary).
Sample Input:
Employee 1: Employee ID - 001, Name - "John"
Employee 2: Employee ID - 002, Name - "Jane", Salary - 5000
*/

#include <bits/stdc++.h>
using namespace std;

class Employee {
    public:
    int employeeID;
    string name;
    int salary;

    Employee(int employeeID, string name, int salary) {
        this->employeeID = employeeID;
        this->name = name;
        this->salary = salary;
        cout << "Employee 2 created with salary " << salary <<". ";
    }

    Employee(int employeeID, string name) {
        this->employeeID = employeeID;
        this->name = name;
        cout << "Employee 1 created with no salary" << endl;
    }

    void detail() {
        int annualSalary = salary * 12;
        cout << "Annual Salary: " << annualSalary << endl;
    }
};

int main() {
    Employee c1(001, "John");
    Employee c2(002, "Jane", 5000);
    c2.detail();

    return 0;
}


/*
Sample Output:
Employee 1 created with no salary.
Employee 2 created with salary 5000. Annual Salary: 60000.
*/
