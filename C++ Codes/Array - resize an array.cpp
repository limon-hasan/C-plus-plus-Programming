// resize an array

#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int arr1[2] = {8, 9};
	int arr2[n + 2];

	// copying arr[] to arr2[]
	for (int i = 0; i < n; i++) {
		arr2[i] = arr[i];
	}

	// storing arr[1] elements into arr2[]
	int j = 0;
	for (int i = n; i < n + 2; i++) {
		arr2[i] = arr1[j];
		j++;
	}

	// print arr2[]
	for (int i = 0; i < n + 2; i++) {
		cout << arr2[i] << " ";
	} cout << endl;
}
