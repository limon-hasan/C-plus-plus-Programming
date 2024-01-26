// Right rotate by one position

#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> &arr, int n) {
	int temp = arr[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		arr[i + 1] = arr[i];
	}

	arr[0] = temp;
	return arr;
}

int main() {
	int n;
	cin >> n;

	vector<int> arr;  // 1, 2, 3, 4, 5, 6, 7
	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;
		arr.push_back(value);
	}
	rotateArray(arr, n);

	for (auto a : arr) {
		cout << a << " ";    // 7, 1, 2, 3, 4, 5, 6, 7
	}  cout << endl;
}
