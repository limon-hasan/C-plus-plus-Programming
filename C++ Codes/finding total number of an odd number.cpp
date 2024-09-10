#include<bits/stdc++.h>
using namespace std;

const int mx = 123;
int arr[mx];

int main() {
    int t;
    cin >> t;
    while(t-- ) {
        int n;
        cin >> n;
        int cnt = 0;
        for(int i= 0; i <n; i++) {
            cin >> arr[i];
        }

        for(int i = 0; i <n ; i++) {
            if(arr[i] % 2 != 0) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}



// _________________________________________________________________



// Or -->
#include<bits/stdc++.h>
using namespace std;

const int mx = 123;
int arr[mx];

int main() {
        int n;
        cin >> n;
        int ans = 0;
        for(int i= 0; i < n; i++) {
            cin >> arr[i];
        }

        for(int i = 0; i < n ; i++) {
            ans += arr[i]%2;
        }
        cout << ans << endl;
}
