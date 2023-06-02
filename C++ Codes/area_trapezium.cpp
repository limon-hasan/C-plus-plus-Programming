#include<bits/stdc++.h>
using namespace std;
int main() {
  
    double a,b,h;
    cout << "Enter first side = ";
    cin >> a;
    cout << "Enter second side = ";
    cin >> b;
    cout << "Enter distance between two sides = ";
    cin >> h;

    double result = 1.0/2 * (a+b) * h;
    cout << "Trapezium Area = " << result; 

    return 0;
}
