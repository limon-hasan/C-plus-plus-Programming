// right rotate array by three position
// Brute-force approach

#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
	int n = nums.size();
	k = k % n; // Handle cases where k >= n

	vector<int> temp;

	// Store the last k elements in temp
	for (int i = n - k; i < n; i++) {
		temp.push_back(nums[i]);
	}

	// Shift the remaining elements to the right
	for (int i = n - k - 1; i >= 0; i--)
	{
		nums[i + k] = nums[i];
	}
	// Copy the elements from temp back to the beginning of arr
	int j = 0;
	for (int i = 0; i < k; i++) // Here, condition (i < k) instead of (i < n-k-1) also be valid for some test case
	{
		nums[i] = temp[j];
		j++;
	}
}

/*
void rotate(vector<int>& nums, int k) {
int n = nums.size();
if (n == 0) return;

// Get the effective number of rotations:
k = k % n;

// checking if d is a multiple of n:
if (k == 0) return;

vector<int> temp(k); // temporary vector

// step 1: Copying last d elements into the temporary vector:
for (int i = n - k; i < n; i++) {
    temp[i - (n - k)] = nums[i];
}

// step 2: Shift first (n-d) elements to the right by d places in nums:
for (int i = n - k - 1; i >= 0; i--) {
    nums[i + k] = nums[i];
}

// step 3: Place the elements of the temporary vector in the first d places of nums:
for (int i = 0; i < k; i++) {
    nums[i] = temp[i];
}
}
*/


int main() {
	int n;
	cin >> n;

	vector<int> arr;    // 1, 2, 3, 4, 5, 6, 7
	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;
		arr.push_back(value);
	}
	int d;   // number of positions to right
	cin >> d;
	rotate(arr, d);

	for (auto a : arr) {
		cout << a << " ";    // [5,6,7,1,2,3,4]
	}  cout << endl;
}
