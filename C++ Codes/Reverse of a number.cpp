// Coding Ninja problem
// https://bit.ly/3vCeBXS

#include<iostream>
using namespace std;

int main() {
	int count = 0, revNum=0;
	int n;
	cin >> n;
	    while(n > 0) {
		int last_digit = n%10;   
		n = n/10;  

        revNum = revNum * 10 + last_digit;		

		}
		cout << revNum;
    }	 
