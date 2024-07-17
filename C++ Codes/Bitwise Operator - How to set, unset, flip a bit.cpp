// CodeChef problem - https://www.codechef.com/practice/course/bit-manipulation/BITMF/problems/BITMEDU2


#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;  // n = 6 = 110
	cin >> n;
	int ans = n | 1;  // ans = 110 | 001 = 111
	// cout << ans << endl;  
	int ans2 = 2;
	ans2 = ~2;  // ~2 = 1111111101
	ans = ans & ans2;  // ans = 111 & (~2) = 101
   	// cout << ans << endl; 
	int ans4 = 1 << 2;  // ans4 = 100
	ans = ans ^ ans4;   // ans = 101 ^ 100 = 001
	cout << ans << endl;
}
