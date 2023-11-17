#include <bits/stdc++.h>  
using namespace std;

void doSomething(int Arr[], int a) // Array will always pass with reference
{
	Arr[0]+=100;
	cout << "value inside function " << Arr[0] << endl;																																						
}

int main() {
int n;
cin >> n;
	int arr[n];
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	} 
	doSomething(arr, n);
	cout << "value isnide main " << arr[0] << endl;
}
