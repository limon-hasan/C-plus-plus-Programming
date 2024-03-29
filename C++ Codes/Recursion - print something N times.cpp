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


// <------ solution 2 -> Explanation: ----->
/*
Certainly! Let's go step by step through the execution of the printNos function with i = 1 and n = 3.

Initial Call: printNos(1, 3, result)

i = 1 is not greater than x = 3, so we move to the else block.
result vector is initialized as empty.
1 is pushed into the result vector.
Recursive call: printNos(2, 3, result)
Recursive Call 1: printNos(2, 3, result)

i = 2 is not greater than x = 3, so we move to the else block.
2 is pushed into the result vector.
Recursive call: printNos(3, 3, result)
Recursive Call 2: printNos(3, 3, result)

i = 3 is not greater than x = 3, so we move to the else block.
3 is pushed into the result vector.
Recursive call: printNos(4, 3, result)
Recursive Call 3: printNos(4, 3, result)

Now, i = 4 is greater than x = 3, so the base case is triggered.
The function returns the result vector: {1, 2, 3}.
Returning to Previous Calls:

In the third call (printNos(3, 3, result)), the result vector is already {1, 2, 3}.
This result is then returned to the second call (printNos(2, 3, result)).
Similarly, the result {1, 2, 3} is returned to the initial call (printNos(1, 3, result)).
Final Result:

The main function now has the result vector as {1, 2, 3}.
The elements of the vector are printed in the for loop in the main function.
*/


// ---------------------------------------------------------------------------------------------------------------


  
// Solution 3 -> FULL CODE :
#include <iostream>
#include <vector>

using namespace std;

vector<int> printNos(int x) {
	if(x == 0)
		return vector<int>();  /* This line creates and returns an empty vector<int>. Essentially, it means that when the value of x becomes 0, the recursion stops, and an empty vector is returned */
	else {
		vector<int> ans = printNos(x-1);   // In a recursive function, you typically want to capture the result of the recursive call because it contributes to building the final result.
		ans.push_back(x);   /* Ei problem e, i = 1 diye na kore jokhon x = 4 diye recursion korbo tokhon printNos(x-1) ei line er pore ei ans.push_back(x) likhbo mane pore x add korbo vector e karon recursion er jonno jokhon backtracking hobe tokhon age printNos(1) theke shuru hobe and 1 add hobe, pore 2,3.... erokom
		                       Ar i = 1 diye korle ans.push_back(i) ei line ta printNos(1, n) er age hobe mane age 1 add korbo vector e karon backtracking jokhon hobe tokhon printNos(1, n) theke shuru hobe ar backtracking howar agei toh amra add kore niyechilam mane line ta printNos() er age likhechilam
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


// <------ Solution 3 Explanation : ---->
/*
Suppose you call printNos(3). The function proceeds as follows:

First Call (printNos(3)):

Since x is not 0, it goes to the else block.
It calls itself with printNos(2).
Second Call (printNos(2)):

Again, x is not 0, so it calls itself with printNos(1).
Third Call (printNos(1)):

x is still not 0, so it calls itself with printNos(0).
Fourth Call (printNos(0) - Base Case):

Now, x is 0, so the base case is triggered, and it returns an empty vector vector<int>().
Unwinding the Recursion:

Going back to the third call (printNos(1)), it receives an empty vector from the base case and pushes back 1 to get {1}.
Returning to the second call (printNos(2)), it receives {1} and pushes back 2 to get {1, 2}.
Returning to the first call (printNos(3)), it receives {1, 2} and pushes back 3 to get {1, 2, 3}.
Final Result (printNos(3)):

The final result is the vector {1, 2, 3}, which is returned.
So, for the input 3, the function printNos(3) returns the vector {1, 2, 3}.
*/



// -----------------------------------------------------------------------------------------------------------------------------------------


// Solution 4 -> FULL CODE :

// (i) -->
#include <iostream>
#include <vector>
using namespace std;

void recursiveFunction(int i, int x, vector<int> &final) {
	if(i > x)
		return;
	else {
		final.push_back(i);
		recursiveFunction(i+1, x, final);
	}
}

vector<int> printNos(int n) {
	vector<int> ans;   // Declaring empty integer array

	recursiveFunction(1, n, ans);
	return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> result = printNos(n);   // n = 3
    
    // Print the final array after the recursion into the result vector
    for (int a : result) {
        cout << a << " ";
    }

    return 0;
}



//  <---------------- Another way ------------------->
	
// (ii) -->
#include <iostream>
#include <vector>
using namespace std;

vector<int> recursiveFunction(int i, int x, vector<int> &final) {
	if(i > x)
		return final; // return vector<int>(); dileo hoto ekhane
	else {
		final.push_back(i);
		recursiveFunction(i+1, x, final);
		return final;   // return final na diye  "return recursiveFunction(i+1, x, final); " dileo hoto
	}
}

vector<int> printNos(int n) {
	vector<int> ans;
	ans = recursiveFunction(1, n, ans);
	return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> result = printNos(n);   // n = 3
    
    // Print the final array after the recursion into the result vector
    for (int a : result) {
        cout << a << " ";
    }

    return 0;
}
	


// -----------------------------------------------------------------------------------------------------------------------------------------------


// Solution 5 -> FULL CODE:

// (i) -->
#include <iostream>
#include <vector>
using namespace std;

void recursiveFucntion(int x, vector<int> &final) {
	if(x == 0)
		return;
	else {
		// final.push_back(x);  -->  ei line age dile ulta print {3,2,1} evabe print hobe. pore tokhon sort kore dilei hobe
		recursiveFucntion(x-1, final);
		final.push_back(x);
	}
}

vector<int> printNos(int n) {
	vector<int> ans;
	recursiveFucntion(n, ans);
	return ans;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> result;
    result = printNos(n);   // n = 3
    
    // Print the final array after the recursion into the result vector
    for (int a : result) {
        cout << a << " ";
    }
    return 0;
}




// <--------------Another way : --------------->

// (ii) -->
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void recursiveFucntion(int x, vector<int> &final) {
	if(x == 0)
		return;
	else {
		final.push_back(x);
		recursiveFucntion(x-1, final);    // {4, 3, 2, 1}
	}
	sort(final.begin(), final.end());    // {1, 2, 3, 4}
}

vector<int> printNos(int n) {
	vector<int> ans;
	recursiveFucntion(n, ans);
	return ans;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> result;
    result = printNos(n);   // n = 3
    
    // Print the final array after sorting
    for (int a : result) {
        cout << a << " ";
    } cout << endl;

    return 0;
}
