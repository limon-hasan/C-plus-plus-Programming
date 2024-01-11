// GCD/HCF -->

// ************ Brute-force Approach ***********
// Using Euclidean Algorithm -->
// Euclidean Aldorithm : gcd(a, b) -> gcd(a-b, b) -> Evabe korte korte jokhon one of the numbers is zero(0) then other number is gcd


// Or,
//************ Optimal Approach ************
// Using Euclidean Algorithm

/* Approach : gcd(a, b) = gcd(a % b, b) -> (a > b)
   This have to do till one of them is zero(0) and then other one become gcd
*/
 
// Algorithm -->
// Time Complxity : O(logφ min(a, b)) --> because whenever there is division happening then the numebr of iterations will be in terms of logarithm
// In digit extraction, we used log10 because there is division by 10 but here, a and b are always changing. we are not sure what will be a and b, depending on different examples it will fructuated. That is why, they have given it a term called Phi(φ)
// And, we use min(a, b) because this is the intitial number where we start from 
/*
while(a>0 && b>0) {
	if(a > b) {
	    a = a % b;
	}
	else
	    b = b % a;
}
if(a == 0)
    cout << a;
else
    cout << b;   

*/


// Optimal Approach -->
#include<bits/stdc++.h>
using namespace std;

int printGCD(int n1, int n2) {

	while(n1 > 0 && n2 > 0) {
		if(n1 > n2)
		n1 = n1 % n2;
		else
		n2 = n2 % n1;
	}
	if(n1 == 0)
	return n2;
	else
	return n1;
}

int main() {
	int n1, n2;
	cin >> n1>> n2;
	cout << printGCD(n1, n2);
    return 0;
}
