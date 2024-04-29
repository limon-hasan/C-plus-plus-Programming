// print fibonacci series and find the n-th fibonacci number 

#include<iostream>
using namespace std;

int fibonacci(int n, int arr[]) {
	int sum = 0;
	for (int i = 2; i < n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		sum = arr[i-1] + arr[i-2];
		arr[i] = sum;
	}

	// prinitng elements from arr[2] 
	for(auto a = 2; a<n; a++) {
		cout << arr[a] <<" ";
	} cout << endl;

	return sum;
}

int main() {

	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i <= 1; i++) {
		cin >> arr[i];
	}

	// prinitng elements arr[0], arr[1]
	for(int a = 0; a<=1; a++) {
		cout << arr[a] <<" ";
	} 

	int result = fibonacci(n, arr);
	cout << "Fibonacci Number: " << result << endl;
}



// -----------------------------------------------------------------------



// <-- OR :
// print fibonacci series and find the n-th fibonacci number 

#include<iostream>
using namespace std;

int fibonacci(int n, int arr[]) {
	int sum = 0;
	for (int i = 2; i < n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		sum = arr[i];
	}

	// prinitng elements from arr[2] 
	for(auto a = 2; a<n; a++) {
		cout << arr[a] <<" ";
	} cout << endl;

	return sum;
}

int main() {

	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i <= 1; i++) {
		cin >> arr[i];
	}

	// prinitng elements arr[0], arr[1]
	for(int a = 0; a<=1; a++) {
		cout << arr[a] <<" ";
	} 

	int result = fibonacci(n, arr);
	cout << "Fibonacci Number: " << result << endl;
}
