// C++ File Handling

#include <iostream>
#include<fstream>

using namespace std;

int main() {

    // writing operation
    // connecting our file with hello stream --> "hello" is an object 

    ofstream hello("sample1.txt");
    // creating a 'st' string and filling it with the string entered by the user
    cout <<"Enter your name: ";
    string st;
    getline(cin, st);

    // writing a string to the file
    hello <<"My name is: "<< st;
    hello.close();

    // Reading operation

    ifstream content("sample1.txt");
    string st1;
    getline(content, st1);

    cout << "the content of the file is: " << st1 << endl;
    content.close();

    return 0;
}
