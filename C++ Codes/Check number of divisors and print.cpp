#include<bits/stdc++.h>
using namespace std;
int main() {
  
    /*
    Time limit 1s --> Eta 10^8 er moddhe kaj kore
    1 < n < 10^19
    Time limit exceed 
    */
    int cnt = 0;
    for(int i = 1; i<= n; i++) {
        if(n % i == 0) {
            cout <<i <<" ";
            cout << n / i <<" ";
            cnt++;
        }
    }
    cout << endl;
    cout <<"total number of divisors " << cnt << endl;


//________________________________________________________________________________

  

    // Or -->
  
    // No time limit exceed
    int cnt = 0;
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            cout <<i <<" ";
            cnt++;
            if(n / i == i) break;
            cout << n / i <<" ";
            cnt++;
        }
    }
    cout << endl;
    cout <<"total number of divisors " << cnt << endl;
}
