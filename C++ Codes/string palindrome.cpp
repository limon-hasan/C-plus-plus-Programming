#include<bits/stdc++.h>
using namespace std;

int main() {
    char s[123];
    cin >> s;
    char temp[123];
    strcpy(temp, s);  // copying s[] to temp[]
    // string s;
    // getline(cin, s);
    int len = 0;
    while(s[len] != '\0') {
        len++;
    }   

    // reversing s[]
    for(int i = 0, j = len - 1; i < j; i++, j--) {
        char tempChar = s[i];
        s[i] = s[j];
        s[j] = tempChar;
    }

    if(strcmp(s, temp) == 0) {
        cout <<"Palindrome" << endl;
    }
    else cout <<"Not Palindrome" << endl;
}



// ___________________________________________________________________________________________________________



// Or  --> checking palindrome
#include<bits/stdc++.h>
using namespace std;

int main() {
    char s[1005];
    cin >> s;
    char temp[1005];

    // copying s[] to temp[]
    int len = 0;
    while(s[len] != '\0') {
        temp[len] = s[len];
        len++;
    }   

    // reversing temp[]
    for(int i = 0, j = len - 1; i < j; i++, j--) {
        char tempChar = temp[i];
        temp[i] = temp[j];
        temp[j] = tempChar; 
    }

    cout << "S: " <<s << endl;
    cout <<"Temp: " << temp << endl;

    bool isEqual = true;
    for(int i = 0; i < len; i++) {
        if(s[i] != temp[i]) {
            isEqual = false;
            break;
        }
    }
    if(isEqual) cout <<"Palindrome" << endl;
    else cout <<"Not palindrome" << endl;


    printf("string s: %s\n", s);
    printf("string temp: %s\n", temp);
}
