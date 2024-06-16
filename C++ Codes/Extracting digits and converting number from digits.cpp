#include <bits/stdc++.h>
using namespace std;

int main() {

   int num;  // num = 231
   cin >> num;
   vector<int> arr;
   int sum = 0;

   // extracting digit from number and then push them into a vector
   while(num != 0) {
      int temp = num % 10;
      arr.push_back(temp);
      num /= 10;
   }

   for(auto a :arr) {
      cout << a <<" ";  // {1, 3, 2}
   } cout << endl;


   // finally converting number from digits of a vector
   int temp, ans;  // 231 = 2*100 + 3*10 + 1 
   ans = temp = 0;
   for(int i = arr.size()-1; i>=0; i--) {
      ans = temp + arr[i];
      if(ans == num) break;
      temp = ans * 10;
   }
   cout <<"Number is: "<< ans << endl;

   return 0;
}



// ____________________________________________________________________________________________________



// V-judge problem --> https://vjudge.net/contest/566680#problem/F
#include <bits/stdc++.h>
using namespace std;

int main() {

   int num;  // num = 231
   cin >> num;
   
   int c = num % 10;  // c = 231 % 10 = 1 
   num /= 10;  // num = num / 10 = 230/10 = 23
   int b = num % 10;  // b = 23 % 10 = 3
   num /= 10;  // num = num / 10 = 23 / 10 = 2
   int a = num % 10; // a = 2 % 10 = 2;
   num /= 10;  // num = num / 10 = 2 / 10 = 0


   // abc = 231
   int abc = 0;  
   abc = abc + a;  // abc = 0 + 2 = 2
   abc = abc * 10;  // abc = 2 * 10 = 20
   
   abc = abc + b;  // abc = 20 + 3 = 23
   abc = abc * 10;  // abc = 23 * 10 = 230

   abc = abc + c;  // abc = 230 + 1 = 231

   cout << abc << endl;

   /* 
   a = 2
   b = 3
   c = 1
   */

   // bca = 312
   int bca = 0;   
   bca = bca + b;   // bca  = 0 + 3 = 3
   bca = bca * 10;  // bca = 3 * 10 = 30
   
   bca = bca + c;   // bca = 30 + 1 = 31
   bca = bca * 10;  // bca = 31 * 10 = 310

   bca = bca + a;  // bca = 310 + 2 = 312

   cout << bca << endl;


   // cab = 312
   int cab = 0;   
   cab = cab + c;   // cab  = 0 + 3 = 3
   cab = cab * 10;  // cab = 3 * 10 = 30
   
   cab = cab + a;   // cab = 30 + 1 = 31
   cab = cab * 10;  // cab = 31 * 10 = 310

   cab = cab + b;  // cab = 310 + 2 = 312

   cout << cab << endl;


   cout << cab + abc + bca << endl;

   return 0;
}
