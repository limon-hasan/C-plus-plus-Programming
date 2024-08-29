#include<bits/stdc++.h>
using namespace std;
int main() {

    // No Time limit exceed --> 
    int n;
    cin >> n;
    bool isPerfect = false;
    for(int i =1; i * i <= n; i++) {
        if(i * i == n) {
        cout <<"Perfect square" << endl;
        isPerfect = true; 
        }
    }
    if(isPerfect == false) cout <<"Not Perfect";
    else cout <<"Perfect" << endl;


//________________________________________________________________


    
    // OR -->
    // Time limit exceed
    int n;
    cin >> n;
    bool isPerfect = false;
    for(int i =1; i <= n; i++) {
        if(i * i == n) {
        cout <<"Perfect square" << endl;
        isPerfect = true; 
        }
    }
    if(isPerfect == false) cout <<"Not Perfect";
    else cout <<"Perfect" << endl;
}
