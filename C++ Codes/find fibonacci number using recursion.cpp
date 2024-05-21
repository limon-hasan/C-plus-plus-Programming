// Time complexity --> O(2^n) --> not exactly 2^n but it is near about 2^n which is generically known as exponential nature
// Here, if every guy is calling twice and it's like tree type. SO it's going to be 2*2*2*2*2............ which is 2^n
// for not being exactly 2^n because --> for f(4) you are calling f(3), f(2) --> so for every time you are like going to twice down. Thereby it is not exactly 2^n

//Space complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

int f(int n) {
	if(n <= 1) return n;

	// multiple recursion calls
	int last = f(n-1);
	int secondLast = f(n-2);

	return last + secondLast;  // retrun f(n) + f(n-2)
}

int main() {

	int n;
	cin >> n;
	cout << n <<"-th " <<"Fibonacci number " << f(n) << endl;
	// We start fibonacci number from 0 --> like 0-th fibonacci number is 0, 1st fibonacci number is 1, 2nd fibonacci number is 1, 3rd is 2, 4th is 3
}



// -------------------------------------------------


/*
Best Approach Using Math Formula: -->
Concept of Differential Equation has been used in this formula.
It's better to cram this formula, you can use this in competetive programming, but nor recommended to use in interview.

class Solution {
public:
    int fib(int n) {
        double sqrt5 = sqrt(5);
        double fibN = pow((1 + sqrt5) / 2, n) - pow((1 - sqrt5) / 2, n);
        return round(fibN / sqrt5);
    }
};
*/
