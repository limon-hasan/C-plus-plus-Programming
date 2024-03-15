// C++ File Handling

#include <iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
    
    // Using open function to open file, not using constructor   
    
    // writing operation
    ofstream out;
    out.open("sample60.txt");
    out << "This is my CSE subject " << endl;
    string st;
    getline(cin, st);
    out << st + " Amar nam Khan Shaheb " << endl;
    out <<"this is me also" << endl;
    out <<"HI FIVE" << endl;
    out.close();


    // read operation
    ifstream in;
    in.open("sample1.txt");

    // this above lines will be printed in this way as well
    string s;
    while(in.eof() == 0)   // while(in) --> This line could be written like this as well
    {
        // in >> st;
        getline(in, s);
        cout << s << endl;
    }

/*
    This above lines will be printed in this way as well : --> 
    string st1, st2, st3;
    getline(in, st);  // This is my CSE subject          
    getline(in, st1);  // JAAAAAAAAAAA Amar nam Khan Shaheb
    getline(in, st2);  // this is me also
    getline(in, st3);  // HI FIVE
    cout << st << endl << st1 << endl << st2 << endl << st3 << endl;
*/
    in.close();
    return 0;
}
