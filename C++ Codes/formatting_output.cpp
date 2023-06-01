#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main()
{
    float num1, num2;

    cout << "Enter two numbers = ";
    cin >> num1 >> num2;

    float sum = num1 + num2;
    cout << "Sum is " << sum << endl;

    cout << showpoint;         // float variable er khetre real answer jodi point e thake tahole showpoint / noshowpoint dileo point dekhabe
    float sub = num1 - num2;   // float variable er khetre real answer jodi point e na thake tahole showpoint dile point dekhabe ar noshowpoint dile point dekhabe na
    cout << "Substraction is " << sub << endl;

    cout<< showpoint;
    int mul = num1 * num2;     // int thakle showpoint noshowpoint dei na keno, kono point show korbe na
    cout << "Multiplication is " << mul << endl;

    float div = num1 / num2;  
    cout << "Division is = " << div;
    cout << endl;

    getch();
}
