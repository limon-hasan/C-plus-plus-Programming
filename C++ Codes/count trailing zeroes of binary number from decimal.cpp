#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n; // 9 = 1001  // 13 = 1101  // 18 = 10010  // 5 = 101   // 2024 = 11111101000 
    int r = 0;
    while(n != 0) {
        int temp = n % 2;
        if(temp == 1) break;
        r++;
        n /= 2;
    }
    cout << r << endl;
}
