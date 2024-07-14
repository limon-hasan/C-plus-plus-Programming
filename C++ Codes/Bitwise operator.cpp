#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 10;  // x = 10 = 1010
    int ans = x | 1;  // ans = 11 = 1011 // Set(1) korlam first digit(ekok) ke
    cout << ans << endl;
    // 2 = 0010  // ~2 = 1101
    int ans1 = ans & (~ 2); // ans1 = 9 = (1011) & (~ 10) = 1001  // Unset(0) korlam second digit(doshok) ke 
    cout << ans1 << endl;
    int ans3 = ans1 ^ 100;  // ans3 = 13 = 1001 ^ 100 = 1101  // Flip korlam third digit(shotok) ke   //  Flip korte hole oi position e 1 diye ar baki posiiton e 0 diye XOR korbo
    cout << ans3 << endl;
}
