// C++ program to count words in  
// a string using stringstream.


#include<iostream>
#include <sstream>
using namespace std;

int countWords(string s)
{
    int count = 0;
    // Breaking input into word 
    // using string stream
    stringstream s1(s);  // Used for breaking words
    string word;
    while(s1 >> word)  // Read from the s1 stream and input it into word string
    {
        count++;
    }
    return count;
}

int main()
{
    int T;
    cin >> T;
    for(int i=0; i<T; i++)
    {
        string str = "geeks for geeks contribution for placements okay BYE";
        cout << "Number of words = " << countWords(str);
    }

    return 0;
}
