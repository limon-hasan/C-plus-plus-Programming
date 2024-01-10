// Brute-force Approach -->
// Time Complexity -> O(n)
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void printPrime(int n){
	int count = 0;
	for(int i=1; i<=n; i++) {
		if(n%i == 0) {
			count++; 
		}
	}
	if(count == 2)
		cout << "Prime Number" << endl;
	else
		cout << "Not prime number"<< endl;
}

int main(){
	int n;
	cin >> n;
	printPrime(n);
    return 0;
}
