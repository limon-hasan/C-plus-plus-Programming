// (5)  -->

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
