/*
Example: 
Input:
5
2 3 1 5

Output:
4
*/  

#include<bits/stdc++.h>
using namespace std;

const int mx = 200024;
int arr[mx];
int freq[mx];

int main() {
        int n;
        cin >> n;
        for(int i= 1; i <= n - 1; i++) {
            cin >> arr[i];
        }

        for(int i = 1; i <= n; i++) {
            freq[arr[i]]++;
        }

        for(int i = 1; i <= n; i++) {
            if(freq[i] == 0) {
                cout << i << endl;
                break;
            }
        }
}
