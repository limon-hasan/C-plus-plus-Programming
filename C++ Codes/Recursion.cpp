// Recursion 

// Segmentation fault -> also known as Stack Overflow

/* Stack Overflow -> When there is numerous functions call waiting due to recursion because you call the recuraion. 
   One function call was waiting and you got another, you got another so it kept on waiting. This is what we call as stack overflow
   This is why infinite recursions are not written because you will end up having stack overflow 
*/
  
/* Stack Space -> Stack space is the space where the remaining non-executed/completed functions stay. 
                  stack space stores yet to be completed functions 
*/

// Recursion Tree : f() -><- f() -><- f() -><- f() 

#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
void print() {
	if(cnt == 3) 
		return;  // function gets terminated
    cout << cnt << endl;
    cnt++;  
    print();

}

int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("inputf.in", "r", stdin);   /* These lines are usually used in contest and online judge when code is not running */
    // freopen("outputf.in", "w", stdout);
    // #endif

    print();

    return 0;
}
