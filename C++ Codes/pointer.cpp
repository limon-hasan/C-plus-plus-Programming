#include<iostream>
using namespace std;

int main(){

    // What is pointer? ----> Data type which holds the address of another data type

    int a=3;
    int* b ;
    b = &a;
    // & ---> (Address of) operator
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;


    // * ---> (value at) Dereference operator 
    cout << "The value at address b is " << *b << endl;

    // pointer to pointer
    int** c = &b;

    cout << "The address of b is "<< &b << endl; 
    cout << "The address of b is "<< c << endl; 
    cout << "The value at address c is " << *c << endl;
    cout << "The value at address (&c) is " << **c << endl;
    cout << "The address of c is " << &c << endl;


    return 0;
}
