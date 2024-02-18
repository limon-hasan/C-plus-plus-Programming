// Find the output of the following -->

#include <bits/stdc++.h>
using namespace std;

class Student { 
    private:
    string name;
    double cgpa;
    string phone;

    public:
    string Department;
    Student() {
        name = "Daniel";
        cgpa = 0.00;
        phone = "017000000000";
        Department = "CSE";
    }

    void printCgpa() {
        cout << name <<" " <<  cgpa << endl;
    }

    void setName(string n) {
        name = n;
    }

    void setCgpa(double c) {
        cgpa = c;
    }

    void setDepartment(string d) {
        Department = d;
    }

    string getDepartment() {
        return name;
    }

    double getName() {
        return cgpa;
    }

    double getPhone() {
        return cgpa;
    }

    void printDetails() {
        cout << name <<" "<< cgpa<<" " << phone<<" " << Department <<" "<< endl;
    }

    ~Student() {
        cout << "Done" << endl;
    }
};

int main() {
    Student Rafi;
    Student Limon;
    Student Tamim;
    Rafi.setName("Tamim");
    Limon.setCgpa(3.70);
    Tamim.setDepartment("CS");
    // Limon.setPhone("019444");
    Rafi.setCgpa(3.50);
    Tamim.printCgpa();
    Rafi.printDetails();
    Tamim.setCgpa(Rafi.getName());
    Rafi.setName(Limon.getDepartment());
    Limon.Department = "CS";
    Rafi.printDetails();
    Limon.printDetails();
    Rafi.printDetails();
    Tamim.printCgpa();

    cout << Rafi.getName()<<" " << Tamim.getPhone() <<" "<< endl;
    cout << "good luck"<< endl;

    return 0;
}

/*
Output : ->
Daniel 0
Tamim 3.5 017000000000 CSE 
Daniel 3.5 017000000000 CSE 
Daniel 3.7 017000000000 CS 
Daniel 3.5 017000000000 CSE 
Daniel 3.5
3.5 3.5 
goof luck
Done
Done
Done
*/  
