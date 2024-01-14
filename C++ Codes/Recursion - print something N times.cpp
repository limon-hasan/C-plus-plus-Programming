// Solution 1 -> FULL CODE:

#include <iostream>
#include <vector>

using namespace std;

void printNos(int i, int x, vector<int> &ans) {
  if(i > x)
    return;
  ans.push_back(i);
  printNos(i+1, x, ans);
}

int main() {
  
  int n;
  cin >> n;
  vector<int> result;
  
  printNos(1, n, result);

  for(auto a : result) {
    cout << a <<  " ";
  } cout << endl;
}


------------------------------------------------------------------------------------------------------------------------------------------


  
// Solution 2 -> FULL CODE :
#include <iostream>
#include <vector>
using namespace std;

vector<int> printNos(int i, int x, vector<int> &result) {
  if (i > x) {
    return result;
  }
  result.push_back(i);
  printNos(i + 1, x, result);
  return result;
}
int main() {
  int n;
  cin >> n;

  vector<int> ans;
  ans = printNos(1, n, ans);
  for (auto a : ans) {
    cout << a << " ";
  }
  cout << endl;
}
