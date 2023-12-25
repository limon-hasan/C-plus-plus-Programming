// C++ program to count words in  
// a string using stringstream.

/***********
A stringstream associates a string object with a stream allowing you to read from the string as if it were a stream (like cin). To use stringstream, we need to include sstream header file. The stringstream class is extremely useful in parsing input. 

Basic methods are:
1. clear()-   To clear the stream.
2. str()-   To get and set string object whose content is present in the stream. 
3. operator <<-   Add a string to the stringstream object. 
4. operator >>-   Read something from the stringstream object.

******************/


#include<iostream>
#include <sstream>
using namespace std;

int countWords(string s)
{
    int count = 0;
    // Breaking input into word 
    // using string stream
    stringstream s1(s);  // Used for breaking words
    /*  It uses a stringstream (s1) to break the input string into words.  */
    string word;
    // The while (s1 >> word) loop extracts words from the stringstream until there are no more words left
    while(s1 >> word)  /*  The while (s1 >> word) loop extracts words from the stringstream until there are no more words left.  */
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
