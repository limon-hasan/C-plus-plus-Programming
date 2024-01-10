//  Print all Divisors of a number

// (1) -->  Using only vector and then sort

// Overall Time Complexity --> O(sqrt(n)) + O(no of factors * log(no of factors)) + O(no of factors))

// Optimal Method : 
#include <bits/stdc++.h>
using namespace std;

void printDivisor(int n) {
	vector<int> divisor;
	set<int> Divisor;
	for(int i=1; i<=sqrt(n); i++) // --> Time complexity : O(sqrt(n))  
	{
		if(n%i == 0) {
			divisor.push_back(i);
			if(n/i != i)   // (1 * 64 = 64) --> Here 1 is i and 64 is n/i. Similiar, (2 * 32 = 64) --> 2 is i and 32 is n/i
			{
			    divisor.push_back(n/i);
			}
		}
	}
	// internal sorting function takes O(no of factors * log(no of factors )) ---> n is the number of factors, n is not the original n 
	sort(divisor.begin(), divisor.end());
	for(auto a : divisor) // --> Time Complexity : O(number of factors)
	 {
		cout << a <<" ";
	}
}

int main() {

    int n;
    cin >> n;

    printDivisor(n);
    return 0;
}    


============================================================================================================================================================================

	
	
// OR --->
// (2)  ==>  Using set

// Optimal Method : 
#include <bits/stdc++.h>
using namespace std;

void printDivisor(int n) {
	vector<int> divisor;
	set<int> Divisor;
  
	for(int i=1; i<=sqrt(n); i++) {
		if(n%i == 0) {
			divisor.push_back(i);   // storing it into vector
			if(n/i != i)   // (1 * 64 = 64) --> Here 1 is i and 64 is n/i. Similiar, (2 * 32 = 64) --> 2 is i and 32 is n/i  
			{
			    divisor.push_back(n/i);   // storing it into vector
			}
			    Divisor.insert(divisor.begin(), divisor.end());    // storing vector into set so that it converts into sorted way
		}
	}
  // printing element 
	for(auto a : Divisor) {
		cout << a <<" ";
	}
}

int main() {

    int n;
    cin >> n;

    printDivisor(n);
    return 0;
}    


-----------------------------------------------------------------------------------------------------------------------------------------------------------------------


// Brute-force Approach -->
#include <bits/stdc++.h>
using namespace std;

void printDivisor(int n) {
	vector<int> divisor;
	set<int> Divisor;
    for(int i=1; i<=n; i++) {
        if(n%i == 0) {
        	divisor.push_back(i);
        }
        Divisor.insert(divisor.begin(), divisor.end());
    }
    for(auto a : Divisor) {
    	cout << a <<" ";
    }
}

int main() {

    int n;
    cin >> n;

    printDivisor(n);
    return 0;
}
