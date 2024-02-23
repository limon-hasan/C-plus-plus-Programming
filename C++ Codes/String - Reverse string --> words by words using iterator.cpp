// Reverese a string by words by words
/* String -->  I am a good boy.  Reverse string --> I ma a doog .yob 
*/



#include <bits/stdc++.h>
using namespace std;

string reverseString (string &s)
{
    return string(s.rbegin(), s.rend());  /*  It's not a loop in the traditional sense, but the iterators are used internally by the string constructor to traverse the characters in reverse order and construct a new string.*/
    /***  The line return string(word.rbegin(), word.rend()); is not itself a loop, but it constructs a new string by using iterators to iterate through the characters of the original string word in reverse order. It's effectively achieving the reversal of the entire string without using an explicit loop.  
          Here, string is a constructor. This constructs a new string using the range defined by the reverse iterators. In other words, it creates a new string by copying characters from the input word in reverse order.   ***/
}

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    for(int i=0; i<T; i++)
    {
        string str;
        getline(cin, str);
        string word;
        stringstream ss(str);  /*  If the string is "I am a good boy" then, The stringstream breaks the input string into individual words: "I", "am", "a", "good", "boy".  */
        while(ss >> word)
        {
            cout << (word) <<" ";
        }
    }
    return 0;
}
