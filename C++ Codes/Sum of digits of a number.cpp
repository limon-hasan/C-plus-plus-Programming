#include<bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;
    int r;
    int sum = 0;
    if(n == 0) cout << n << endl;
    else {
    while(n) {
        r = n % 10;
        cout <<r << " ";
        n /= 10;
        sum += r;
    }
    cout << endl;
    cout <<"Sum = "<< sum << endl;
    }
}
