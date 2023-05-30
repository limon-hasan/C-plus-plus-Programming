#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main()
{
    int num;
    char name[30];
    cout << "Enter number = ";
    cin >> num;
    cout << "Entered number = " << num <<endl;

    cout<< "Enter your name : ";
    cin.ignore();                /* 
                                 When you use cin >> num; to read an integer input, the user typically types the number and then presses the Enter key. The >> operator extracts the number from the input and leaves the newline character ('\n') in the input buffer.
                                 Later, when you try to use cin.getline(name, 30); to read a line of input for the name, the newline character left in the input buffer from the previous cin >> num; is consumed immediately. As a result, getline() reads an empty line or an empty string for the name.
                                 To handle this issue, you can use cin.ignore(); right after reading the integer to clear the newline character from the input buffer. The cin.ignore() function discards the newline character and any other characters left in the input buffer, allowing you to proceed with the next input operation without any issues.
                                 */
    cin.getline(name,30);
    cout << "Name: " << name;

    getch();
}

