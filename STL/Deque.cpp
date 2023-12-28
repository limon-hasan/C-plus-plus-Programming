// C++ STL
// Deque --->  similiar to list and vector

#include <bits/stdc++.h>
using namespace std;


void explainDeque()  // It is exactly similiar to list and vector
{
	deque<int> dq;
	dq.push_back(1); // {1}
	dq.emplace_back(2); // {1,2}
	dq.push_front(4);  // {4, 1, 2}
	dq.emplace_front(3); // {3, 4, 1, 2}

	for(auto a : dq) {
		cout << a << " ";  // {3, 4, 1, 2}
	} cout << endl;

	dq.pop_back();  // {3, 4, 1}  ---> last element will be deleted
	for(auto a : dq) {
		cout << a << " ";  // {3, 4, 1}
	} cout << endl;

	dq.pop_front(); //{4, 1} ---> first element will be deleted
	for(auto a : dq) {
		cout << a << " ";  // {4, 1}
	} cout << endl;

	// rest fucntions same as vector and list
	// begin, end, rbegin(), rend(), clear, insert, size, swap  ---> all work same as vector and list

}

int main() {

	explainDeque();
}
