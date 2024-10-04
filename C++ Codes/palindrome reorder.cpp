// https://cses.fi/problemset/task/1755/

#include<bits/stdc++.h>
using namespace std;

const int mx = 1e6 + 123;
char s[mx];
int temp[mx];

int main() {
    cin >> s;
    int len = 0;               
    while(s[len] != '\0') {
        len++;
    }   

    for(int i = 0; i < len; i++) {  // temp[2] = 0
        temp[s[i] - 'A']++;   // temp[s[4]-'A]++ = temp['C'-'A']++ = temp[2]++ 
    }                                                             // temp[2] = 1

    // temp[0] = 6;  // A
    // temp[2] = 2;  // C
    // temp[1] = 1;  // B

    /*
    a -> temp[0] = 3
    b -> temp[1] = 2
    c -> temp[2] = 2
    */

    int oddCount = 0;
    for(int i = 0; i < 26; i++) {
        if(temp[i] % 2 == 1) {
            oddCount++;
        }
    }
    if(oddCount > 1) {
        cout <<"NO SOLUTION" << endl;
        return 0;
    }

    int id = 0;
    for(int i = 0; i < 26; i++) {
        while(temp[i] >= 2) {
            temp[i] -= 2;  // temp[1] = temp[B] = 2  // temp[B] - 2 = 2-2 = 0
            s[id] = i + 'A';
            s[len - 1- id] = i + 'A';
            id++;
        }
    }

    for(int i = 0; i < 26; i++) {
        if(temp[i] == 1) {
            s[id] = i + 'A';
        }
    }

    for(int i = 0; s[i] != '\0'; i++) {
        cout << s[i];
    }
}
