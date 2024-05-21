// leetcode problem - https://leetcode.com/problems/valid-palindrome/description/

class Solution {
public:
    bool isPalindrome(string s) {
      
    int left = 0;
    int right = s.size() - 1;
    while(left<= right) {
        if(!isalnum(s[left])) {
            left++;
        }
        else if(!isalnum(s[right])) {
            right--;
        }
        else if(tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        else {
            left++;
            right--;
        }
    }
    return true;
    }
};



// ------------------------------


// Full code: 
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
      
    int left = 0;
    int right = s.size() - 1;
    while(left<= right) {
        if(!isalnum(s[left])) {
            left++;
        }
        else if(!isalnum(s[right])) {
            right--;
        }
        else if(tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        else {
            left++;
            right--;
        }
    }
    return true;
    }
};

int main() {

	string s;
	getline(cin, s);

	Solution s1;
	bool ans = s1.isPalindrome(s);

	if(ans == true) 
		cout <<"Palindrome" << endl;
	else 
	cout <<"Not Palindrome" << endl;
}
