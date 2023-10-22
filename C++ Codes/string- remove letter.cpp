#include <bits/stdc++.h>
using namespace std;
string removeLetter(string input, char letter);

int main()
{
    string str;
    getline(cin, str);

    char remove;
    cin >> remove;

    string modified = removeLetter(str, remove);
    cout << "Original string = " << str << endl;
    cout << "Modified string = " << modified << endl;
    return 0;
}

string removeLetter(string input, char letter)
{
    string result;   // input string
    for(char a : input)
    {
        if(a!= letter)
            result = result+a;
    }
    return result;
}



Or------------------------



#include <bits/stdc++.h>
using namespace std;
string removeLetter(string &input, char letter);

int main()
{
    string str;
    getline(cin, str);

    char remove;
    cin >> remove;

    string modified = removeLetter(str, remove);
    cout << "Original string = " << str << endl;
    cout << "Modified string = " << modified << endl;
    return 0;
}

string removeLetter(string &input, char letter)
{
    string result;   // input string
    for(char a : input)
    {
        if(a!= letter)
            result = result+a;
    }
    return result;
}
  
