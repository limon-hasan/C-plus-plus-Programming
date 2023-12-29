// C++ STL

// Queue --> FIFO (First In First Out)
// All the operaitons are happening in constant time O(1)


#include <bits/stdc++.h>
using namespace std;


void explainQueue()  
{
	queue<int> q;
	q.push(1); // {1}
	q.push(2); // {1, 2}
	q.emplace(4); // {1, 2, 4}

	cout << q.back() << endl;  // 4

	q.back() += 5; // 4+5 = 9
	cout << q.back() << endl;  // 9
	// Now Queue is {1, 2, 9}
	cout << q.front() << endl;  // 1


	q.pop(); // {2, 9}  ---> Here first element will be deleted in queue 
	cout << q.front() <<endl;  // 2 because 1 is deleted after q.pop(). That's why now 2 is the first element


	// <------ size, swap, empty same as stack ---->
    

}

int main() {

	explainQueue();
}
