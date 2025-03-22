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
	cout<< arr[3].first << endl;
	cout << arr[0].first <<","<< arr[0].second << endl;



    pair<int, char> pp = {1, 'c'};
    cout << pp.first <<" " << pp.second << endl;



    pair<string, int> p = {"limon", 2};
    cout << p.first <<" " << p.second << endl;
    for(auto a : p.first) {
        char ch = a;
        cout << ch;
    } cout << endl;



    pair<int, int> parr[] = {{1,2}, {3,6}};
    cout << parr[0].first <<" " << parr[0].second << endl;
    cout << parr[1].first <<" " << parr[1].second << endl;



    pair<int, vector<int>> pr;
    int a = pr.first = 3;
    cout << a <<" -> ";
    pr.second = {2,6,9};
    for(auto a : pr.second) {
        cout << a <<" ";   // printing value in the map
    } cout << endl;
    


    pair<int, int> ppp;
    ppp = make_pair(2, 4);
    ppp.first++;
    cout << ppp.first << " " << ppp.second << endl;



    ppp = {5,6};
    cout << ppp.first <<" "<< ppp.second << endl;




    pair<int, vector<string>>p;
    p = {4, {"limon", "emon", "shimon", "munira"}};
    cout << p.first <<" " << p.second.size() << endl;
    for(auto a : p.second) {
        cout << a << " ";
    } cout << endl;



    //pair of vector sorting: -->
    pair<int, int> p1, p2;
    p1 = {4,5};
    p2 = {3,6};
    // if(p1 < p2) cout <<"YES" << endl;
    // else cout <<"No" << endl;

    // OR -->
    pair<int, int> p = min(p1, p2);
    pair<int, int> pp = max(p1, p2);
    cout << pp.first <<" " << pp.second << endl;




    // // pair of vector sorting: -->
    vector<pair<int, int>> v;
    // v = {{1,2}, {9,0}, {6,9}, {6,1}, {3,7}};
    v.push_back({2,6});
    v.push_back({1,6});
    v.push_back({3,6});
    v.push_back({9,6});
    v.push_back({4,6});
    v.push_back({5,6});

    for(auto a : v) {
        cout << a.first <<" " << a.second << endl;
    } cout << endl;

    // increasing order
    sort(v.begin(), v.end());
    for(auto a : v) {
        cout << a.first <<" " << a.second << endl;
    } cout << endl;

    // Decreasing order
    sort(v.rbegin(), v.rend());
    for(auto a : v) {
        cout << a.first <<" " << a.second << endl;
    } cout << endl;




    // array of pair
    pair<int, int> parr[] = {{1,2}, {3,6}, {0,9}};
    sort(parr, parr + 3);
    for(int i = 0; i < 3; i++) {
        cout << parr[i].first <<" " << parr[i].second << endl;
    }

    int a[] = {1,20,2};
    for(auto u : a) {
        cout << u <<" ";
    } cout << endl;




    vector<pair<string,int>>v;
    v.push_back({"shahriar", 21});
    v.push_back({"momo", 13});
    v.push_back({"sharif", 34});
    v.push_back({"shahriar", 35});
    v.push_back({"sharif", 34});
    v.push_back({"shahriar", 21});
    v.push_back({"momo", 13});

    sort(v.begin(), v.end());
    int sz = unique(v.begin(), v.end()) - v.begin();
    for(int i = 0; i < sz; i++) {
        cout << v[i].first <<" " << v[i].second << endl;
    }



    pair<int, int> p;
    cin >> p.first >> p.second;
    cout << p.first <<" " << p.second << endl;


	

    // pair sorting with comparator sort which tells the sorting funiton how pairs will be sorted -->
	bool comp(pair<int, int> &p1, pair<int, int> &p2) {
	    if(p1.first < p2.first) return 0;
	    else if(p1.first == p2.first) return p1.second < p2.second;
	    else return 1;
	}
	
	void solve() {
	    vector<pair<int, int>> v;
	    v = {{3,1}, {6,9}, {2,6}, {3,5}, {5,3}, {1,2}};
	
	    sort(v.begin(), v.end(), comp);
	    for(auto aa : v) {
	        cout << aa.first  << " -> " << aa.second << endl; 
	    }
	}
	
}

int main() {
	explainPair();
}
