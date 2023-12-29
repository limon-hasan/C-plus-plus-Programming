#include <bits/stdc++.h>
using namespace std;

int main() {
	
	// For Array
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);  
	// a ---> This is the name of the array or the beginning of the sequence you want to sort.
    // a+n ---> This represents the end of the sequence to be sorted. It is a pointer pointing one position past the last element you want to include in the sorting.

	for(int i=0; i<n; i++) {
		cout << a[i] <<" ";  // sorted array -->  {4 5 5 7 8 25} 
	} cout << endl;

    // lower & upper bound return location of the value. so in the case of vector, it returns iterator and in the case of array it returns pointer


    // Lower Bound
    // {4, 5, 5, 7, 8, 25} 
	int *ptr = lower_bound(a, a+n, 6);
	cout << *ptr << endl;  // 7 --> because 6 is not present and 7 is immediate greater than 6
	int *p = lower_bound(a, a+n, 5);
	cout << *p << endl;  // 5 --> because 5 is present
	int *pr = lower_bound(a, a+n, 23);
	cout << *pr << endl;  // 25 --> because 23 is present and 25 is immediate greater than 23
	int *pp = lower_bound(a, a+n, 26);
	if(pp == a+n) {
    	cout <<"Not found" << endl;
    	return 0; // eta dile nicher line ta ar print korbe na
	}
	cout << *pp << endl; // show grabage value because 26 is not present and greater than 26 is also not present
    
    
    // Upper Bound
    int *ar = upper_bound(a, a+n, 25);  // not found because greater than 25 is not present
    if(ar == a+n) {
    	cout << "Not found";
    }
    else
    	cout << *ar << endl;

    int *a = upper_bound(a, a+n, 8);  // 25 because 25 is greater than 8
    if(ar == a+n) {
    	cout << "Not found";
    }
    else
    	cout << *ar << endl;

    int *x = upper_bound(a+3, a+n, 4);  // 7
    if(x == a+n) {
    	cout << "Not found";
    }
    else
    	cout << *x << endl;

    int *xr = upper_bound(a+3, a+n, 8);  //25
    if(xr == a+n) {
    	cout << "Not found";
    }
    else
    	cout << *xr << endl;


    // For vector
    int n;
    cin >>n;
    vector<int> a(n);
    // storing elements in the vector
    for(int i=0; i<n; i++) {
    	cin>> a[i]; 
    }

    // printing element
    for(auto i : a) {
    	cout << i <<" ";   // 4 5 5 25 7 8 

    } cout << endl;

    sort(a.begin(), a.end());
    // printing element after sorting
    for(int i=0; i<n; i++) {
    	cout << a[i] <<" ";   // 4 5 5 7 8 25 

    } cout << endl;

    // lower bound
    auto it = lower_bound(a.begin(), a.end(), 4); // 4
    if(it == a.end()) {
    	cout <<"Not found" << endl;
    }
    else
    	cout << *it << endl;

    auto itr = lower_bound(a.begin(), a.end(), 6);  // 7
    if(itr == a.end()) {
    	cout <<"Not found" << endl;
    }
    else
    	cout << *itr << endl;

    // upper bound
    auto itt = upper_bound(a.begin(), a.end(), 4);  // 5
    if(itt == a.end()) {
    	cout << "Not found" << endl;
    }
    else 
    cout << *itt << endl;

    auto i = upper_bound(a.begin(), a.end(), 25); // Not found
    if(i == a.end()) {
    	cout << "Not found" << endl;
    }
    else 
    cout << *i << endl;


    // For Set
    int n;
    cin >>n;
    set<int> s;
    for(int i=0; i<n; i++) {
    	int x;
    	cin>> x;
    	s.insert(x);   // storing element in the set
    }
    
    //printing set element
    for(auto i : s) {
    	cout << i << " ";  // { 4 5 7 8 25 }
    } cout<<endl;

    // lower bound
    auto it = s.lower_bound(4);  // 4
    cout << *it << endl;
    auto itr = s.lower_bound(6);  // 7 ---> 6 is not present in the set and 7 is greater than 6
    cout << *itr << endl;

    // upper bound
    auto itt = s.upper_bound(4); // 5
    cout << *itt << endl;
    auto ir = s.upper_bound(9);  // 25
    cout << *ir << endl;
    auto ii = s.upper_bound(25);
    cout << *ii << endl;

}
