// Reverse an array

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
