// Inserting element in array with right shift

#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int arr[n], arr1[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];   // {5 6 4 7 3 0 9 5 8 2 1}
	}

	// temprary array for storing element upto (index-1)
	int temp[100];

	int value;
	cin >> value;   // 26
	int indx;
	cin >> indx;    // 4


	// storing elements from index 0 to particular (index-1) into temp[]
	for (int i = 0; i < indx; i++) {
		temp[i] = arr[i];    // {5, 6, 4, 7}
	}

	// right shifting for inserting upto (index-1)
	for (int i = n - 1; i > indx; i--) {
		arr1[i] = arr[i - 1];    // {3, 0, 9, 5, 8, 2}
	}

	// copying temp[] element to arr1[]
	for (int i = 0; i < indx; i++) {
		arr1[i] = temp[i];   // {5, 6, 4, 7}
	}

	// put that value in that specific index
	arr1[indx] = value;  // arr1[4] = 26

	// print the final arr1[]
	for (int i = 0; i < n; i++) {
		cout << arr1[i] << " "; // {5 6 4 7 26 3 0 9 5 8 2}
	} cout << endl;

}
