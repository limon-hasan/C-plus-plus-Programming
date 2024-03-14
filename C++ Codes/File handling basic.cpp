// C++ File Handling

#include <iostream>
#include <fstream>  // header file to include classes for reading and writing in the file
/*
The useful classes for working with files in C++ are :
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

// In order to work with files in C++, you will have to open it . Primimarily, there are two ways to open a file:
// 1. Using the constructor
// 2. Using the member fucntion open() of the class
using namespace std;

int main() {

    string st = "Limon bhai";
    string st2;

    // Opening files using constructor and writing it --> ofstream is a class
    ofstream out("sample60.txt"); // Write operation  // out is an object --> this "out" object of "ofstream" class helps us to write something in "simple60.text" file
    out << st;  // this ine prints the contents of string like "Limon bhai" to the output file "sample60.txt" that is associated with the 'ofstream' object "out"

  
    // Opening files using constructor and reading it
    ifstream in("sample60b.txt");  // Read operation --> here, "in" is a object of "ifstream" class   // Here, 'in' object name can be anything line x,y,z..........
    // in >> st2;   // the ">>" operator is used to extract data from the input file stream (ifstream) "in" and store it into the variable st2.

    getline(in, st2);  // this line is used instead of using "in >> st2" to get the word after the space
    cout << st2;  // now prints in the console whatever written in the st2 string

    return 0;
}
