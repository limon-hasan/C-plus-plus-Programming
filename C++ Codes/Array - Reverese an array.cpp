// Reverse an array

// Solution 1: optimal approach --> Space-optimized iterative method(Two pointer)
#include <bits/stdc++.h>  
using namespace std;

void reverse(int arr[], int n) {
    int start = 0;
    int end = n-1; 
    while(start<=end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n) {
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}                                                 
 
int main() {
	int arr[6] = {1,4,0,5,-2,15};
	int brr[5] = {2,6,3,9,4};

	reverse(arr, 6);
	reverse(brr, 5);
                                                      // Output: 15 -2 5 0 4 1 
                                                     //          4 9 3 6 2 
	printArray(arr, 6);
	printArray(brr, 5);
}



// -----------------------------------------------------------


// Solution 2: Brute force approach --> using an extra array 
//Time complexity --> O(n) = O(n) + O(n)[main function] + O(n) + O(n)[reverseArray()] + O(n)[printArray()]
// space complexity --> O(n) = O(n)[main function] + O(n)[reverseArray()] + O(1)[All other variables in both functions(i, j, n) ]
#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
	for(int i = 0; i<n; i++) {
		cout << arr[i] <<" ";  
	} cout << endl;
}

void reverseArray(int arr[], int n) {
	int arr2[n];
	int j = n-1;
	for(int i = 0; i<n; i++) {
		arr2[j] = arr[i];
		j--;
	}
	/* This above for loop will be written like following this as well: 
 	for(int i = n-1; i>=0; i--) {
		arr2[n-i-1] = arr[i];
	}
	*/
	printArray(arr2, n);
}

int main() {

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	reverseArray(arr, n);
}



// -----------------------------------------------------


// Solution 3: Recursive method --> Recursive method with two pointers
#include<iostream>
using namespace std;

void reverseArray(int arr[], int left, int right) {

	// base case
 	if(left >= right)  // if(left >= right) this will als be valid here
 	{
 		return;
 	}

 	swap(arr[left], arr[right]);

 	// recursive call
 	reverseArray(arr, left+1, right-1);
}

void reverse(int arr[], int n) {
	
	// using two pointer 
	int left  =0;
 	int right = n-1;
    
    reverseArray(arr, left, right);
}

int main() {

	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i<n; i++) {
		cin >> arr[i];
	}

	cout <<"Before reverse: ";
	for(int i=0; i<n; i++) {
		cout << arr[i] <<" ";
	} cout << endl;

	reverse(arr, n);

	cout <<"After reverse: ";
	for(int i=0; i<n; i++) {
		cout << arr[i] <<" ";
	} cout << endl;
	
	return 0;
}
