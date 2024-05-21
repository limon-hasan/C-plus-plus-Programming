// Check if the given String is Palindrome or not

// Functional check for checking palindrome using recursion
// functional means --> through function it says the string is palindrome or not
// time complexity --> O(n/2) ~ O(n)
// space complexity --> O(n/2) ~ O(n) --> Auxiliary stack space

#include<bits/stdc++.h>
using namespace std;

bool palindromeCheck(string &s, int i) {
	// base case
	if (i >= s.length() / 2)
		return true;
	
	if (s[i] != s[s.length() - i - 1])
		return false;

	swap(s[i], s[s.length() - i - 1]);  // this line is not mandatory because if the s[i] and s[n-i-1] are both equal they donot need to be swappped or if i swap them they will remain same as before
	// recursive call
	return palindromeCheck(s, i + 1); // if i donot write 'return' here before the recursive function then i have to write return 'true' after this line
	// return true;
}

int main() {

	string s;
	cin >> s;

	cout << palindromeCheck(s, 0) << endl;  // This line can also be written here -->  [cout << (palindromeCheck(s, 0) ? "Palindrome" : "Not Palindrome ") << endl]

	/* This line will also be valid if we write the function return type 'int' instead of writing 'bool' : -->
	int ans = palindromeCheck(s, 0);
	if(ans == -1) {
		cout <<"False" << endl;
	} else
	cout <<"True" << endl;
	*/
	return 0;
}
