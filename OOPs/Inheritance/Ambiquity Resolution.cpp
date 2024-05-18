#include <iostream>  
using namespace std;

class A  
{  
public:  
    void display()  
    {  
        cout << "Class A" << endl;  
    }  
};  

class B  
{  
public:  
    void display()  
    {  
        cout << "Class B" << endl;  
    }  
};  

class C : public A, public B  
{  
public:
    void view()  
    {  
        A::display(); // Call display() from class A
        B::display(); // Call display() from class B
    }  

    // Override display() in class C
    void display()
    {
        cout << "Class C" << endl;
    }
};  

int main()  
{  
    C c;  
    // Call display() from class C
    c.display();

    // Call display() from class A and B using view() method
    c.view();

    /*  Or, we can do like this as follows : --> 
        B b;
        b.display();
        b.B :: display();
    */

    return 0;  
}
