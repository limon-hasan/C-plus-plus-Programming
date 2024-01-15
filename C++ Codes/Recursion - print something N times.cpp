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
  
  // Create an empty vector to store the result in result vector
  vector<int> result;
  
  // Calling the function and capturing the result in result vector
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
  return result;    // "printNos(i + 1, x, result);" and "return result;" ei 2 line na diye direct "return printNos(i+1, x, result);" dileo hoto
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


---------------------------------------------------------------------------------------------------------------


  
// Solution 3 -> FULL CODE :
#include <iostream>
#include <vector>

using namespace std;

vector<int> printNos(int x) {
	if(x == 0)
		return vector<int>();  /* This line creates and returns an empty vector<int>. 
	                           Essentially, it means that when the value of x becomes 0, the recursion stops, and an empty vector is returned */
	else {
		vector<int> ans = printNos(x-1);   // In a recursive function, you typically want to capture the result of the recursive call because it contributes to building the final result.
		ans.push_back(x);
		return ans;
	}
}

int main() {
    int n;
    cin >> n;

    vector<int> result = printNos(n);
    
    // Print the result after the recursion
    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}
