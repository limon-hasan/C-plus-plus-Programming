(1)--------------- Using of showpoint/ noshowpoint

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


(2)--------------------Using of setprecision()
    
#include<bits/stdc++.h>
#include<conio.h>
#include<iomanip>     // setprecision use korle ei header file ta use korte hobe
using namespace std;

int main()
{
    float num1, num2;

    cout << "Enter two numbers = ";
    cin >> num1 >> num2;

    cout << showpoint;
    cout << setprecision(10); // setprecision er vitore jei number dibo sheita point er agee ebong pore milaye total digit dekhabe
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


(3)------------------Using of fixed

#include<bits/stdc++.h>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
    float num1, num2;

    cout << "Enter two numbers = ";
    cin >> num1 >> num2;

    cout << showpoint;
    cout << fixed;    // fixed command use korle shudhu point er porer digit gula count korbe
    cout << setprecision(5);
    
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


(4)------------------Using of setw()   ---> setw() command use korle output gula ekta shundor format e dekhay
    
#include<bits/stdc++.h>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
    float num1, num2;

    cout << "Enter two numbers = ";
    cin >> num1 >> num2;

    cout << showpoint;
    cout << fixed;    // fixed command use korle shudhu point er porer digit gula count korbe
    cout << setprecision(5);

    float sum = num1 + num2;
    cout << setw(20)<< "Sum is = " << sum << endl;

    cout << showpoint;         // float variable er khetre real answer jodi point e thake tahole showpoint / noshowpoint dileo point dekhabe
    float sub = num1 - num2;   // float variable er khetre real answer jodi point e na thake tahole showpoint dile point dekhabe ar noshowpoint dile point dekhabe na
    cout<< setw(20) << "Substraction is = " << sub << endl;

    cout<< showpoint;
    int mul = num1 * num2;     // int thakle showpoint noshowpoint dei na keno, kono point show korbe na
    cout<< setw(20) << "Multiplication is = " << mul << endl;

    float div = num1 / num2;
    cout << setw(20)<< "Division is = " << div;
    cout << endl;

    getch();
}
    
                         
                         
                         
                         
                         
                         
                         
                         
