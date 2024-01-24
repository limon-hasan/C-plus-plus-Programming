// left array shifting by one position
#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> &arr, int n) {
    int temp = arr[0];
    for(int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n-1] = temp;
    return arr;
}

int main() {
	int n;
	cin >> n;

	vector<int> arr;  // 1, 2, 3, 4, 5
	for(int i = 0; i<n; i++) {
		int value;
		cin >> value;
		arr.push_back(value);
	}
	rotateArray(arr, n);

	for(auto a : arr) {
		cout << a << " ";    // 2, 3, 4, 5, 1
	}  cout << endl;
}
