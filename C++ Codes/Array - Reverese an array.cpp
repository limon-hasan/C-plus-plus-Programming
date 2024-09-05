// Reverse an array

// Solution 1: optimal approach --> Space-optimized iterative method(Two pointer)
// time complexity --> O(n) = in reverse() TC is O(n/2) which simplifies to O(n) because the number of iterations is approximately n/2 since in each iteration, two elements are processed.
// space complexity --> O(1)

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



// OR -->
// For CP Style: -->
#include<bits/stdc++.h>
using namespace std;

const int mx = 1000123;
int freq[mx];

int main() {
  
        int n;
        cin >> n;

        for(int i = 0; i < n; i++) {  // Adjusted loop to run from 0 to n-1
            cin >> freq[i];
        }

    int i = 0; 
    int j = n-1;
        while(i <= j) {
            swap(freq[i], freq[j]);
	    /* We can do swap as the following way as well: -->
     	    int temp = freq[i];
            freq[i] = freq[j];
            freq[j] = temp;
     	    */
            i++;
            j--;
        }

        for(int i = 0; i < n; i++) {  // Adjusted loop to run from 0 to n-1
            cout<< freq[i]<<" ";
        }
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



// OR -->
// For CP Style: -->
#include<bits/stdc++.h>
using namespace std;

const int mx = 1000123;
int freq[mx];
int freq1[mx];

int main() {
        int n;
        cin >> n;

        for(int i = 0; i < n; i++) {  
            cin >> freq[i];
        }

        int j = 0;
        for(int i = n - 1; i >= 0; i--) {
            freq1[i] = freq[j];
            j++;
        }
	/* The above loop we can use like the following way also :
	for(int i = n - 1, j = 0; i >= 0; i--, j++) {
            freq1[i] = freq[j];
        }
	*/

        for(int i = 0; i < n; i++) { 
            cout<< freq1[i]<<" ";
        }
	return 0;
}



// -----------------------------------------------------


// Solution 3: Recursive method --> Recursive method with two pointers
// time complexity --> O(n) = O(n/2)[reveseArray()] + O(n)[reverse()] + O(n)+O(n)+O(n)+O(n)[main funtion()]
/* space complexity --> O(n) = O(n/2)[due to recursion in reveseArray()] + O(n)[The space complexity of reverse() is also dominated by the space complexity of reverseArray, which is O(n)]
				+ O(n)+O(n)[main funtion and for the reveseArray() fucntion due to the call stack]    */ 
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



// ----------------------------------------------------------


// Solution 4: Using library function (New Approach)

// Time Complexity: O(n)
// Space Complexity: O(n)
/*
The reverse() function in C++ is predefined in a header file algorithm. Syntax: array_name.reverse(BidirectionalIterator first, BidirectionalIterator last)
Bidirectional iterators first and last indicate the starting and ending positions in the array. Elements that lie in this range are reversed.
Note that this range includes the first but excludes the last element.
*/

#include <iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[], int n) {
	for(int i = 0; i<n; i++) {
		cout << arr[i] <<" ";  
	} cout << endl;
}

//Reverse array using library function
void reverseArray(int arr[], int n) {
	//Reversing elements from index 0 to n-1 
	reverse(arr, arr + n);   // in-built function 
}

int main() {

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	reverseArray(arr, n);
	printArray(arr, n);
}
