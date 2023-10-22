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
    for(char a : input)     // for (char c : input) starts a for-each loop. It iterates through each character (represented by char c) in the input string.

    {
        if(a!= letter)
            result = result+a;
    }
    return result;
}



Or------------------------      /* is a C++ range-based for loop (also known as a for-each loop). It allows you to iterate over the elements of a sequence, such as an array, a string, or a container, without the need to specify the loop counter or index explicitly.

In your specific case, input is a string, and you are using a range-based for loop to iterate through each character (char) in the string. Here's a breakdown of how it works:

for (char c : input) starts the loop.
char c declares a character variable c that will represent each character in the string during each iteration.
: input specifies the sequence you want to iterate over, in this case, the string input.
*/



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
  
