// Solution 1:

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
