// C++ STL

// Algorithm in STL


#include <bits/stdc++.h>
using namespace std; void


void explainExtra() {
    
    int num = 7;  // Binary representation --> 0 0 0 0 0 0..................0 1 1 1 
    int cnt = __builtin_popcount();  // 3  // __builtin_popcount returns how many 1s or set bits in there/ number of set bits
    // here in 7 there are 3 set bits or 1s so it return three set bits

    long long num = 165786578687;
    int cnt = __builtin_popcountll();  // when data type will be long long then it __builtin_popcount becomes  __builtin_popcountll 

  
    // String permutation
    string s = "123";
    sort(s.begin(), s.end());

    do{
    	cout << s << endl;
    } while(next_permutation(s.begin(), s.end())); 

    // if i want the largest element in an array
    // a[] = {7, 10, 5, 6}
    int max = *max_element(a, a+n);  // 10

    // for minimum element
    int min = *min_element(a, a+n); // 5

}

int main() {
	
	explainExtra();
	return 0;
}
