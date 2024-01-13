// Print name N times using recursion

// Time complexity -> O(n) 
/* Space complexity -> O(n) -> In space cpmplexity we generically assume stack space 
   Here, space complexity is hypothetical because the computer's internal memory uses the stack space
*/

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
