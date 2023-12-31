// C++ STL

// Unordered Set
// In most of the cases, the time complexity is O(1)
// But in worst case ---> time complexity is O(n)

#include <bits/stdc++.h>
using namespace std;

void explainUset() {
	unordered_set<int> st;
	// Everything is similiar to set but the only thing that is it doesnot store in a sorted order 
    // And it will just have unique elements 
    // It stores in randomized order

    // All the operations are similiar to set like insert, erase......
    // ALl the functions works but lower_bound & upper_bound fucntions do not work
	



    // Creating an unordered_set of integers
    std::unordered_set<int> mySet;

    // Inserting elements into the unordered_set
    mySet.insert(80);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(10);
    mySet.insert(50);
    mySet.insert(11);


    // Displaying elements using iterator
    for (auto element : mySet) {
        cout << element << " ";   // {11 50 10 30 20 80}
    }
    cout << endl;

    // Checking if an element is present
    int value = 40;
    auto it = mySet.find(value);

    if(it != mySet.end()) {
    	cout << *it;  // 40 is not present in that unordered_set that's why it will show "Not present"
    } 
    else 
    	cout << "value is not present" << endl;  

    // Erasing an element
    mySet.erase(20);

    // Displaying elements after erasing
    for (auto element : mySet) {
        cout << element << " ";   // {11 50 10 30 80} 

    }
    cout << endl;

    // Size of the unordered_set
    cout << mySet.size() << endl;

    // Clearing the unordered_set
    mySet.clear();
    cout << mySet.empty() << endl;  // 1 --> true because of clearing set

}

int main() {
	
	explainUset();
	return 0;
}
