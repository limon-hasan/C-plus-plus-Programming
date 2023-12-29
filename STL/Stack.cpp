// C++ STL

// Stack --> LIFO (Last In First Out)

// Everything happens in constant time. In stack, push, pop and top all operations are O(1) operations.  
// TIme Complexity --> O(1)

#include <bits/stdc++.h>
using namespace std;


void explainStack()  
{
	stack<int> st;   
	st.push(1);  //{1}
 	st.push(2);  // {2,1}
	st.push(3);  // {3,2,1}
	st.push(3);  // {3,3,2,1}
	st.emplace(5);  // {5,3,3,2,1}

	cout << st.top();  // 5 (because 5 went out last) & " st[2] is invalid here "
	cout << endl;
	cout << st.size();  // 5
	cout << endl;
	st.pop();  // {3,3,2,1} ---> Now, size is 4 because one(top) element is popped out(deleted)

	cout << st.top() <<endl;  // 3 ---> because top element(5) is popped out
	
	cout << st.size() << endl;  // 4

	cout<< st.empty();  // 0

	// swapping stacks
	stack<int> st1, st2;
	st1.swap(st2);
}

int main() {

	explainStack();
}
