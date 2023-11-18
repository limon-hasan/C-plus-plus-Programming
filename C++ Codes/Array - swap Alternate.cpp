//  Swap Alternate element

#include <bits/stdc++.h>  
using namespace std;
void swapAlternate(int arr[], int n)
{
	for(int i=0; i<n; i=i+2) {
		if((i+1) < n)
		swap(arr[i], arr[i+1]);
	}
	// print the array
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
    int even[8] = {5,2,9,4,7,6,1,0};  // After swapping alternate --->  2,5,4,9,6,7,0,1
    int odd[5] = {11,33,9,76,43};     // After swapping alternate ---> 33,11,76,9,43

	swapAlternate(even, 8);
	swapAlternate(odd, 5);
  return 0;
}


--------------------------------------------------------------------

// Or ----->  

#include <bits/stdc++.h>  
using namespace std;

void swapAlternate(int arr[], int n)
{
	for(int i=0; i<n; i=i+2) {
		if((i+1) < n)
		swap(arr[i], arr[i+1]);
	}
}

void printAlternate(int arr[], int n) {
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
    int even[8] = {5,2,9,4,7,6,1,0};  // After swapping alternate --->  2,5,4,9,6,7,0,1
    int odd[5] = {11,33,9,76,43};     // After swapping alternate ---> 33,11,76,9,43

	swapAlternate(even, 8);
	printAlternate(even, 8);
	swapAlternate(odd, 5);
	printAlternate(odd, 5);
	return 0;
}  
