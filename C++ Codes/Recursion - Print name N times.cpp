// Problem link : https://www.codingninjas.com/studio/problems/-print-n-times_8380707?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
// Two solution -->

// Print name N times using recursion

// Time complexity -> O(n) 
/* Space complexity -> O(n) -> In space cpmplexity we generically assume stack space 
   Here, space complexity is hypothetical because the computer's internal memory uses the stack space
*/


// (i) -->
// Normal Solution without using vector : -->
#include<bits/stdc++.h>
using namespace std;

void print(int i, int n) {
	if(i > n) {
		return;
	}
	cout << "Limon" << endl;
	print(i+1, n);  
}

int main() {
	int n; 
	cin >> n;

    print(1, n);  // n = 4

    return 0;
}


------------------------------------------

// (ii) -->
// Solution 1 -->

#include <iostream>
#include <vector>
using namespace std;

void recursiveName(int i, int x, vector<string> &name) {
	if(i > x)
		return;
	else{
		name.push_back("Coding Ninjas");
		recursiveName(i+1, x, name);
	}
}
vector<string> printNTimes(int n) {
	vector<string> ans;
	recursiveName(1, n, ans);
	return ans;
}

int main() {
	int n;
	cin >>n;
	vector<string> result;
	result = printNTimes(n);

	for(const string a : result) {
		cout <<a <<" ";
	} cout << endl;
}


-------------------------------------------------

// (iii) -->
// Solution 2 : -->
#include <iostream>
#include <vector>
using namespace std;

void recursiveName(int x, vector<string> &name) {
	if(x == 0)
		return;
	else{
		name.push_back("Coding Ninjas");
		recursiveName(x-1, name);
	}
}
vector<string> printNTimes(int n) {
	vector<string> ans;
	recursiveName(n, ans);
	return ans;
}

int main() {
	int n;
	cin >>n;
	vector<string> result;
	result = printNTimes(n);

	for(const string a : result) {
		cout <<a <<" ";
	} cout << endl;
}
