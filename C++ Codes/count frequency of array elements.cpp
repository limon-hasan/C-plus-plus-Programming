/* Constrains: -->
1 <= n <= 10^5
1 <= ai <= 10^6 [array elements]
1 <= q <= 10^5 [number of queries]
1 <= value <= 10^6 [of which values i want to know frequency]
*/

#include<bits/stdc++.h>
using namespace std;

const int mx = 1000123;
int freq[mx];
// map<int, int> freq;  // Or i can use here map also

int arr[100123];

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        for(int i = 0; i < n; i++) {  // Adjusted loop to run from 0 to n-1
            cin >> arr[i];
            freq[arr[i]]++;
        }

        int numQuery;
        cin >> numQuery;
        while(numQuery--) {
            int value;
            cin >> value;
            cout << freq[value] << endl;  // Output the frequency of 'value'
        }
    }

    return 0;
}
