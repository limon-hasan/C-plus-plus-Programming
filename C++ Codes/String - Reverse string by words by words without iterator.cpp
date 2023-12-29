// without using iterator and using iterator loop


#include <bits/stdc++.h>
using namespace std;

// Using iterator loop
string reverseString(string& s)
{
    string reversed;
    for(auto it = s.rbegin(); it != s.rend(); it++)
    {
        reversed.push_back(*it);
    }
    return reversed;
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
            cout << reverseString(word) <<" ";
        }
        cout << endl;
    }
    return 0;
}
