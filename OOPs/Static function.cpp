// Static function
// It doesnot need to create object to call
// It doesnot have "this" keyword
// static fucntion can only access static functions

#include <bits/stdc++.h>
using namespace std;

class Hero {

private:
	int health;

public:
	char level;
	char *name;

	static int timeToComplete;  // "timeToComplete" is a static member
    
	// Default cosntructor
	Hero() {
		cout << "Simple Constructor called" << endl;
		name = new char[100];  // dynamically allocated in the heap, not statically
	}

    // static function
    static int random() {
		return timeToComplete;

	}

   	~Hero() {
		cout << "Destructor called" << endl; 
	}
};

int Hero :: timeToComplete = 2;   // "::" this is called scope resolution operator 

int main() {
	cout << Hero::random() << endl;
}


// -----------------------------------------------------------------------

// First example :-->  Geeks for geeks
#include <iostream>  
using namespace std; 

class Box {
    private:
    static int length;
    static int breadth;
    static int height;

    public:
    static void print() {
        cout << "Length = " << length << endl;
        cout << "Breadth = " << breadth << endl;
        cout << "Height = " << height << endl << endl;
    }
};

int Box :: length = 10;
int Box :: breadth = 20;
int Box :: height = 30;

int main() {
    Box h1;

    // Call thorugh class name
    Box :: print();

    // Call through object name
    h1.print();

}      
/* Output : 
Length = 10
Breadth = 20
Height = 30
*/


// -------------------------------------------------------------------------------------------------------------------------------------


// Or,
#include <iostream>  
using namespace std; 

class Box {
    private:
    static int length;
    static int breadth;
    static int height;

    public:
    void setLength(int length) {
        this->length = length;
    }
    int getLength() {
        return length;
    }
    static void print() {
        cout << "Length = " << length << endl;
        cout << "Breadth = " << breadth << endl;
        cout << "Height = " << height << endl;
    }
};

int Box :: length = 10;
int Box :: breadth = 20;
int Box :: height = 30;

int main() {
    Box h1;
    h1.setLength(11);
    cout << h1.getLength() << endl;  // 11
    Box :: print();

}
/*
Output : 
11
Length = 11
Breadth = 20
Height = 30
*/




// Second Example : -->

#include <iostream>
using namespace std;

class Student {
    private :
    static int total;
    
    public:
    Student() {
        total = total + 1;
    }
    static void print() {
        cout << total << endl;
    }
};

// Initialization static member value
int Student :: total = 0;

int main() {
    Student s1;
    Student::print();  // 1
    s1.print();  // 1

    Student s2;  
    s2.print();  // 2
    
    Student s3;
    s3.print();  // 3

}



// or, 

// Second Example : -->
#include <iostream>
using namespace std;

class Student {
    private :
    static int total;
    
    public:
    Student() {
        total = total + 1;
    }
    static void print() {
        cout << total << endl;
    }
};

// Initialization static member value
int Student :: total = 0;

int main() {

    Student::print();  // 0
    Student s1;    // updating total 0 to 1 under Student constructor
    // through class
    Student :: print();  // 1
    // through object
    s1.print();  // 1  // this way can be written as well

    Student s2;  // updating total 1 to 2
    Student :: print(); // 2
 
    Student s3;  // updating total 2 to 3
    Student :: print();  // 3
    s3.print();  // 3  // this way can be written as well(through object)
}
