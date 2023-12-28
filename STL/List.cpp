// C++ STL

// List ---> Container

#include <bits/stdc++.h>
using namespace std;


//  List is a container                  
void explainList() {
	list<int > ls;  // list is a container that similiar to a vector. It gives you front operations as well

	ls.push_back(2); // {2}
	ls.emplace_back(4); // {2,4}
	for(auto a : ls) {
		cout << a << " ";   // {2,4}
	} cout << endl;

	ls.push_front(5); // {5,2,4}
	ls.emplace_front(3);  // {3,5,2,4}
	for(auto i: ls) { 
		cout << i << " ";   // {3,5,2,4}
	} cout << endl;

	// rest fucntions same as vector
	// begin, end, rbegin(), rend(), clear, insert, size, swap  ---> all work same as vector

}

int main() {

	explainList();
}
