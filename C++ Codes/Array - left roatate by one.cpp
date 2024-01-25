//  https://bit.ly/3ZeXGrO
// left rotate array by one position 

// Time Complexity : O(n)
// Space complexity : The extra space i am using is O(1) and but in order to solve this problem I am using this array so if you have to take space into consideration fot the algorithm pariticularly I will say i am using this array so thereby O(n) is being used. It is already given it to me but i am using it in order to solve it   

// using vector
#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> &arr, int n) {
    int temp = arr[0];
    for(int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    /* Evabeo loop chalaleo hoy
    for(int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    */
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
