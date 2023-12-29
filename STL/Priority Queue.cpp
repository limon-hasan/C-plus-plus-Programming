// C++ STL


/*** Priority Queue ---> the maximum element stays at the top or the largest element
If you are using character then the largest character, if you are using integer then the largest integer 
*****/
// It is not a linear data structure that means the data is not stored in a linear fashion. THe highest value is put on the top  
// At inside, a tree is mainained

// Time Complexity --->
// push --> O(log(n))
// top --> O(1)
// pop --> O(log(n))

#include <bits/stdc++.h>
using namespace std;

void explainPQ()  
{
	// Maximum Heap
	priority_queue<int> pq;
	pq.push(5);  // {5}
	pq.push(2); // {5,2}
	pq.push(8);  // {8,5,2}
	pq.push(3); // {8,5,3,2}
	pq.push(6); // {8,6,5,3,2}

	cout<< pq.top() << endl; // 8

	pq.pop(); // {6,5,3,2}  --> The top most element will be popped
	cout << pq.top() << endl; // 6

	// size, swap, empty functions same as others


	// Priority Queue which stores the minimum element at the top
	// Minimum Heap

	priority_queue<int, vector<int>, greater<int>> p;  // ---> This is syntax
	p.push(5); // {5}
	p.push(2); // {2,5}
	p.push(8); // {2,5,8}
	p.push(10); // {2,5,8,10}
	p.push(3); // {2,3,5,8,10}

    cout << p.top() << endl; // 2
	p.pop(); // {3,5,8,10}
	cout << p.top() << endl; // 3   

}

int main() {

	explainPQ();
}
