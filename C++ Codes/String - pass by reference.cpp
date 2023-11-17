#include <bits/stdc++.h>  // String
using namespace std;

void printName(string &nam) {
	nam[0] = 'l';
	cout << nam << endl;
}

int main() {
	string name;
	cin >> name;
	printName(name);
	cout <<name;
}
