// C++ STL

#include <bits/stdc++.h>
using namespace std;

void explainPair() {

	// Initialize two variables in a paired way
	pair<int, int> p = {1,3};  // pairs is a part of utility library
        cout << p.first;  // printing first elements of pair
	cout << endl;
	cout << p.first << " " << p.second; // printing elements of pair
	cout << endl;

	// Initialize more than two or three variables in a paired way
	pair<int, pair<int, int>> f = {1, {3, 6}};
	cout << f.first << endl;
	cout << f.second.first << endl;
	cout << f.first << " " << f.second.second <<" "<< f.second.first;
        cout << endl;

	// Storing pairs in array indexes. Pair can be treated as a data type
	pair<int, int> arr[] = {{5,8}, {2,7}, {9,0}, {4,6}, {8,1}}; // Pair Array
	cout << arr[2].first << endl;
        cout << arr[1].first << endl;
	cout << arr[4].second << endl;
	cout<< arr[3].first << endl;
}

int main() {
	explainPair();
}
