// C++ STL

// Set --> A container that stored element in Sorted and Unique way
// It is not a linear container
// In set, everything happens in logarithmic time complexoty (log(n))

#include <bits/stdc++.h>
using namespace std;

void explainSet()  
{
	set<int> st;
	st.insert(1); // {1}
	st.emplace(2); // {1, 2}
	st.insert(2); // {1, 2}
	st.insert(4); // {1, 2, 4}
	st.insert(3); // {1, 2, 3, 4}

	for(auto a : st) {
		cout << a <<" ";  // {1, 2, 3, 4}
	} cout << endl;

    // {1,2,3,4,5}
    auto it = st.find(3) // it returns an iterator which points to 3

    // {1,2,3,4,5}
    auto it = st.find(6); // it returns st.end() which points right after the end element. Because 6 is not here in the set

    // {1, 4, 5}
    st.erase(5);  // {1,4}  --> it erases 5 // It takes logarithmic time

    int cnt = st.count(2); // if 1 is presents in the set then it will return 1(because of sorted and unique) otherwise it returns 0

    auto it = st.find(3);
    st.erase(it); // we can erase element using iterator also  // It takes constant time


    // Erase element from certain range to range
    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase --> {1 ,4, 5}  [first, last) or [start, end)
    


    // lower_bound & upper_bound 
    // {1, 2, 3, 4}
    auto it1 = st.lower_bound(2);  // 2
    cout << *it1 << endl;
    
    auto it2 = st.upper_bound(4);  // prints grabage value
    cout << *it2 << endl;



	// Store element in the vector using set

    // Declare a vector
	vector<int > myVector;   // {5, 2, 8, 10, 3, 2, 8}
	for(int i=0; i<7; i++) {
		int value;
	    cin >> value;
	    myVector.push_back(value);  
	}

	// printing vector element
	    for(auto a : myVector) {
	    	cout << a <<" ";  // vector = {5, 2, 8, 10, 3, 2, 8}
	} cout << endl;

	set<int> s; // set
	s.insert(myVector.begin(), myVector.end());

	// printing element using set in the vector
	for(auto a : s) {
		cout << a << " ";  // Set = {2, 3, 5, 8, 10} 
	} cout << endl; 


  

    // Printing elements in set using iterator (begin and end)
	for(set<int> :: iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";   // Set = {2, 3, 5, 8, 10} 
	} cout << endl;

	set<int> :: iterator it = s.begin(); // {2, 3, 5, 8, 10}
	it++;
	cout << *it << endl; // 3 --> because of (it++)

	set<int> :: iterator ite = s.end(); 
	ite--;  // s.end() points right after the last element. so if we put s.end() it shows undefined behavior. That's why we use it-- to show the value of last element
	cout << *ite << endl; // 10

	auto itr = s.rbegin();  // reversed set = {10, 8, 5, 3, 2}
	cout << *itr << endl;  // 10
	auto i = s.rend();  
	i--;   
	cout << *i << endl;  // 2


    // Printing elements in set using reverse iterator (rbegin and rend)
    for(auto itrr = s.rbegin(); itrr != s.rend(); itrr++) {
        cout << *itrr << " ";   // reversed set = {10, 8, 5, 3, 2}
    } cout << endl;



    // Check size and empty
    cout << s.size() << endl; // 5
    // s.clear(); // { }
    cout<< s.empty() << endl; // 1 because of s.clear()



    // Swap with another set
    set<int> s2 = {1, 3, 7};
    for(auto a : s2) {
    	cout << a <<" ";  // s2 = {1,3,7}
    } cout << endl;

    s.swap(s2);  // the contents of s and s2 are exchanged.
    cout << "s = ";
    for(auto a : s) {
    	cout << a << " ";  //  s = {1,3,7}
    } cout << endl;

    cout << "s2 = ";
    for(auto a : s2) {
    	cout << a << " ";  //  s2 = {2 3 5 8 10}
    } cout << endl;

}

int main() {
	
	explainSet();
}
