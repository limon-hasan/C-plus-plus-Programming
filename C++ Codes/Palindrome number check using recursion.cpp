// Recursive C++ program to check if the
// number is palindrome or not --> using recursion

#include <bits/stdc++.h>
using namespace std;

int rev(int originNum, int reversedNum) {
	if(originNum == 0) {
		return reversedNum;
	}

	reversedNum = (reversedNum * 10) + (originNum % 10);
	return rev(originNum / 10, reversedNum); 
}

int main() {
	int n= 121;
	int temp = rev(n, 0);

	if(temp == n) {
		cout << "Yes" << endl;
	}
	else
	    cout <<"No" << endl;
}
