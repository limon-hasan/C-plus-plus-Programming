/*
Example: 
Input:
5
2 3 1 5

Output:
4
*/  

// Using Map : 
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



// ___________________________________________________


// Or -->
#include<bits/stdc++.h>
using namespace std;

const int mx = 200024;
int arr[mx];
int freq[mx];

int main() {
        int n;
        cin >> n;
        int ans1 = 0;
        for(int i= 1; i <= n - 1; i++) {
            cin >> arr[i];
            ans1 += arr[i];
        }

    int ans2 = 0;
        for(int i = 1; i <= n; i++) {
            ans2 += i;
        }
        cout << ans2 - ans1 << endl;
}
