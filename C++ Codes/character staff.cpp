#include<bits/stdc++.h>
using namespace std;

int main() {
    // amader kache jodi index (i = 0,1,2,3...) thake tahole amra oi index er shathe 'a'(97) add korle oi index e thaka character ke paye jabo --> (index + 'a') = oi index er character
    // Ar character(a,b,c....) dewa thakle amra tokhon oi character theke 'a' character minus korle oi character er index(i = 0,1,2,3...) peye jabo --> (ch - 'a) = oi ch character er index
    
    int p = 'e';  cout << p << endl; // 101
    char q = 'e'; cout << q << endl;  // e

    // printing character from its "Ascii" value
    cout << (char)('a'+1) << endl;  // b
    cout << (char)('a'+10) << endl << endl; // k

    // printing character in loop
    int x = 'a';
    for(int i = 0; i < 26; i++) {
        cout << (char)(x++) <<" ";   // a,b,c,d,e,f..............
    } cout << endl;


    // finding position of chracter from taking input of character
    char c;  
    cin >> c;
    cout << c - 'a' << endl;  // 5
    cout << (int)(c - 'a') << endl;  // 5

    int y = 'd';
    cout << y << endl; // 1000
    cout << (char)'d' << endl; // d
    cout << (char)y << endl;  // d

    char ch = 65;
    cout << ch << endl; // A
    cout << (int)ch << endl;  // 65

    char ch1 = '6'; cout << ch1 << endl;
    
    string s = "1345"; cout << s << endl;  //1345
}
