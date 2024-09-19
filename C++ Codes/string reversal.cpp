// For CP -->

#include<bits/stdc++.h>
using namespace std;
int main() {
    char s[123];  // used for C program
    cin >> s;
    /* If i try to do reverse the whole line string with space the we have to do as follows:
    string s;
    getline(cin, s);
  */
    int len = 0;
    while(s[len] != '\0') {
        len++;
    }

    int left = 0;
    int right = len - 1;
    while(left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }

    // // This can be done by the following loop also -->
    // for(int i = 0, j = len - 1; i < j; i++, j--) {
    //     swap(s[i], s[j]);
    // }
  
    cout << s << endl;
    return 0;
}
