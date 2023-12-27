// Using built-in fucntion or without using loop


#include <bits/stdc++.h>
using namespace std;

string reverseString (string &s)
{
    return string(s.rbegin(), s.rend());  /*  It's not a loop in the traditional sense, but the iterators are used internally by the string constructor to traverse the characters in reverse order and construct a new string.*/
                                         /***  The line return string(word.rbegin(), word.rend()); is not itself a loop, but it constructs a new string by using iterators to iterate through the characters of the original string word in reverse order. It's effectively achieving the reversal of the entire string without using an explicit loop.  ***/
}

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    for(int i=0; i<T; i++) {
        string str;
        getline(cin, str);
        // printing reverese string
        cout << reverseString(str);
    }
    return 0;
}
