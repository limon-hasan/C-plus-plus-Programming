// GCD -->

// Time Complexity -> O(min(n1, n2))
// Brute-force Approach -->
#include<bits/stdc++.h>
using namespace std;

void printGCD(int n1, int n2) {
	
	int gcd = 1;
	for(int i=1; i <= min(n1, n2); i++) {
		if(n1 % i == 0 && n2 % i == 0) {
			gcd = i;
		}
	}
	cout << gcd << endl;     
}

int main() {
	int n1, n2;
	cin >> n1>> n2;
	printGCD(n1, n2);
    return 0;
}


------------------------------------


// Brute-force Approach --> taking linear time complexity
// Time complexity -> O(min(n1, n2))
#include<bits/stdc++.h>
using namespace std;

void printGCD(int n1, int n2) // n1 = 20, n2 = 40
{
	int gcd;
	for(int i = min(n1, n2); i >= 1; i--)  // min(20, 40) = 20 
	{  
		if(n1 % i == 0 && n2 % i == 0) {
			gcd = i;
			break;
		}
	}
	cout << gcd << endl;
}

int main() {
	int n1, n2;
	cin >> n1>> n2;
	printGCD(n1, n2);
    return 0;
}



--------------------------------------------------------------------------------------------------------------------



// Or
// Brute-force Approach -->
#include<bits/stdc++.h>
using namespace std;

void printGCD(int n1, int n2) // n1 = 20, n2 = 40
{
	for(int i = min(n1, n2); i >= 1; i--)  // min(20, 40) = 20 
	{  
		if(n1 % i == 0 && n2 % i == 0) {
			cout << i << endl;
			break;
		}
	}
}

int main() {
	int n1, n2;
	cin >> n1>> n2;
	printGCD(n1, n2);
    return 0;
}
