#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter two numbers = ";
    cin >> num1 >> num2;
    
    float div = (float)num1 / num2;  // type casting
    cout << "Division is = " << div;
    cout << endl;
    
    float rem = num1 % num2;
    cout << "Remainder is = " << rem;
    cout << endl;

    getch();
}
