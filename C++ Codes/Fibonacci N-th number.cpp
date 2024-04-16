// find n-th fibonacci number

#include<iostream>
using namespace std;

int fibonacci(int n, int arr[]) {
	int sum = 0;
	for(int i = 2; i<n; i++) {
         sum = arr[i-1] + arr[i-2];
         arr[i] = sum;   // updating the value of previous two index
	}
	return sum;
}

int main() {

	int n;
	cin >> n;
	int arr[n];

	for(int i = 0; i<=1; i++) {
		cin >> arr[i];
	}
	
	int result = fibonacci(n, arr);
	cout <<"Fibonacci Number: " << result << endl;
}
