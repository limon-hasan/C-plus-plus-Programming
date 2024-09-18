// String Declare-->

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    // 1st way -->
    char str[10] = "abcd";
    cout << str << endl;

    char s1[4] = "app"; cout << s1 << endl; // app

    // 2nd way
    char str2[] = "abcdef";
    cout << str2 << endl;

    // The following way will not work -->
    // char str3[10];
    // str3 = "abdrt";
    // cout << str3 << endl;

    // 3rd way ->
    char str4[6] = {'x','y','z','p','q'};
    cout << str4 << endl;  // xyzpq

    // 4th way -->
    char str5[] = {'a', 'x', 'p','\0'};
    cout << str5 << endl;

  	char s[10];
  	s[0] = 'd';
  	s[1] = 't';
  	s[2] = 'p';
  	s[3] = '\0';
	
  	cout << s << endl;  // dtp

    string st;
    cin >> st;
    cout << st << endl;
	return 0;
}
