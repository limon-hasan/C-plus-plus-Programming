// Without using swap functin

#include <bits/stdc++.h>  
using namespace std;
void printAlternate(int arr[], int n) {
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void swapAlternate(int arr[], int n)
{
	for(int i=0; i<n; i+=2) {
		int temp;
		if((i+1) < n) {
			temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}		
	}
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
