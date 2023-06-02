#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x =5;
    int y = x++;

    cout << x;  // 6
    cout << endl;
    cout << y;  // 5
    cout << endl;

    y = x--;
    cout<< y << endl;  //6
    cout << x << endl;  //5
    
  return 0;
}
