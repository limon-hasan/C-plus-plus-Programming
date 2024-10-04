// https://cses.fi/problemset/task/1755/

#include<bits/stdc++.h>
using namespace std;

const int mx = 1e6 + 123;
char s[mx];
int temp[mx];

int main() {
    cin >> s;
    int len = 0;           
    // finding string length
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
        // finding the number of odd count
        if(temp[i] % 2 == 1) {
            oddCount++;
        }
    }
    if(oddCount > 1)  // if oddcount is multiple or greater than 1 then it would not be possible to reorder palindrome then we have to break 
    {
        cout <<"NO SOLUTION" << endl;
        return 0;
    }

    int id = 0;
    for(int i = 0; i < 26; i++) {
        while(temp[i] >= 2) {
            // Now we have to cut 2 from temp[i = 0,1,2....] that means, if((temp[1] = temp[B]) = 5) then first we have to deduct 2 from temp[B] 
            // then temp[B] will be temp[B]=3 then we have to insert in s[id = 0,1,2....]th and s[len-id-1]th posiiton          
            temp[i] -= 2;  // temp[1] = temp[B] = 2  // temp[B] - 2 = 2-2 = 0
            s[id] = i + 'A';   // insert s[id = 0] th position
            s[len - 1- id] = i + 'A';  // and also insert the same element which is inserted in the s[id] because we have to make palindrome
            id++;  // after that inserting or fill-upping in these position, we have to increase id(posiiton) to more inserting 
        }
    }

    // now if we have more element(odd number) like temp[B] after inserting in the above and which is odd number like temp[B] = 1 then, we have to inserting it in the gap posiiton
    for(int i = 0; i < 26; i++) {
        // now we have just 0 or 1 in the temp[] string because after inserting we have ony=ly odd count or 0 in the temp[] but we have n headache with 0 so we have to check with 1 just
        if(temp[i] == 1) {
            s[id] = i + 'A';
        }
    }

    // printing final s[]
    for(int i = 0; s[i] != '\0'; i++) {
        cout << s[i];
    }
}
