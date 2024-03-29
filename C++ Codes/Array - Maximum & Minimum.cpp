// Without using built-in function

#include <bits/stdc++.h>  
using namespace std;

// minimum value
int getMin(int arr[], int n) {
	int min = INT_MAX;
	for(int i=0; i<n; i++) {
		if(arr[i] < min)
		min = arr[i];
	}

    // Returning min
	return min;
}

// maximum value
int getMax(int arr[], int n) {
	int max = INT_MIN;
	for(int i=0; i<n; i++) {
		if(arr[i] > max)
		max = arr[i];
	}
    // Returning max
	return max;
}

int main() {
	int size;
	cin >> size;
	int arr[100];
	for(int i=0; i<size; i++) {
		cin >> arr[i];
	}
	getMax(arr, size);
	getMin(arr, size);

	cout << "Maximum is " << getMax(arr, size) << endl;
	cout << "Minimun is " << getMin(arr, size) << endl;
	
}

----------------------------------------------------
	
// Using built-in function


/#include <bits/stdc++.h>  
using namespace std;

// minimum value
int getMin(int arr[], int n) {
	int mini = INT_MAX;
	for(int i=0; i<n; i++) {
		mini = min(mini, arr[i]);   // using built-in function
		// if(arr[i] < min)
		// min = arr[i];
	}

    // Returning min
	return mini;
}

// maximum value
int getMax(int arr[], int n) {
	int maxi = INT_MIN;
	for(int i=0; i<n; i++) {
		 maxi = max(maxi, arr[i]);   // using built-in function
		// if(arr[i] > max)
		// max = arr[i];
	}
    // Returning max
	return maxi;
}

int main() {
	int size;
	cin >> size;
	int arr[100];
	for(int i=0; i<size; i++) {
		cin >> arr[i];
	}
	getMax(arr, size);
	getMin(arr, size);

	cout << "Maximum is " << getMax(arr, size) << endl;
	cout << "Minimun is " << getMin(arr, size) << endl;
	
}
