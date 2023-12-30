// C++ STL

// Multiset

#include <bits/stdc++.h>
using namespace std;

void explainMultiset() {
	// Everything is same as set
	// only stores duplicate elements also


	multiset<int> ms;
	ms.insert(1); // {1}
	ms.insert(1); // {1, 1}
	ms.insert(1); // {1, 1, 1}

	ms.erase(1); // it erases all 1 in that multiset, not only one 1
	int cnt = ms.count(1)  // it counts the number of 1s in the multiset

    // {1, 1, 1}
	// only a single one erased
	ms.erase(ms.find(1)); // I give the address(ms.find() returns an iterator which points to the address), not the element. That's why it erases that address only, not the whole element
    // but if I give element(1) instead of giving address then it would erase all the 1 in the multiset

    // multiple elements are erased
    ms.erase(ms.find(1), ms.find(1)+2);   // erase specific 1s denoted here

    


    // printing after erasing multiple elements in multiset
    multiset<int> mss = {1,4,1,3,7,3,9,3};

    // printing elements of multiset before erasing
    for(auto a : mss) {
    	cout << a << " ";  // multiset = {1,1,3,3,3,4,7,9}
    } cout << endl;

    auto it = mss.find(3);
    if(it != mss.end()) {
    	mss.erase(3);
    }

    // printing elements of multiset after erasing all 3
    for(auto a : mss) {
    	cout << a << " ";  // {1,1,4,7,9}
    } cout << endl;


    // rest all fucntion same as set

}
int main() {
	
	explainMultiset();
	return 0;
}
