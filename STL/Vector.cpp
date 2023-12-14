// C++ STL

#include <bits/stdc++.h>
using namespace std;


//  Vector is a container                  
void explainVector() {

	vector<int > v;

	v.push_back(1);
	v.emplace_back(2);  // It is similiar to push_back but it faster than push_back. It dynamicaly increases its size and inserts value at the back


	// Define vector as a paired data type
    vector<pair<int, int>> vec;  // Here, pair is a data type of vector
    vec.push_back({1,6});   // Ekahne push_back use korle parenthesis er vitore curly braces o dewar lagbe
    vec.emplace_back(4,5);  // Ekhane emplace_back use korle parenthesis er vitore curly braces dewa lagbe na


    // Assigning vector size and it's value by which the vector will be fulfilled
    vector<int> v1(5, 100);  // Here, 5 is the size of this container and 100 is the value which is filled in the container of size 5
    vector<int> v2(5);      // Only vector size is initialized ---> Here, I didn't initialize the value so the value which is filled in the container will be like 0 (zero) or garbage value 
                           // example : {0,0,0,0,0}

    vector<int> a1(6, 20);
    vector<int> a2(a1);  // copy of vector from another vector

    vector<int> a = {1,4,7,0,5};
    cout << a[3] << endl;   // printing element of vector a
    cout << a.at(4) << endl;  // printing element of vector a
    

    // taking vector input and print and iterator 
    vector<int> s;
    for(int i=0; i<5; i++) {
    	int value;
    	cin >> value;
    	s.push_back(value);
    }
    vector<int> :: iterator it = s.begin();
    it++;
    cout << *(it) << endl;


    // How to use Iterator in a vector
    // Iterator points to the memory address
    vector<int > v = {6,5,7,8,9};
    vector<int> :: iterator a = v.begin();  // If i am trying to write v.begin() that means v.begin() is actually pointing to the memory address, not the element
    a++;
    cout << *(v.begin()) << endl;   // it prints the element because of de-reference 
    cout << *a;


    vector<int> a = {33, 14, 7, 0, 1};
    vector<int> :: iterator it = a.begin();
    it++;

    cout << *(a.begin()) << endl;  // 33
    cout << *it << endl;   // 14
    it = it + 2;
    cout << *it << endl;  // 0 

    vector<int > :: iterator it = a.end();
    cout << *(a.end()) << endl; // 0 ---> because a.end() indicates the address of the memory right after the last element but not the last element itself
    it--;  //  now it points the last elements and that is 1
    cout << *it << endl;  // 1 
    

    vector<int> :: iterator it = a.rend();  // r.end() means reverse end
    // cout << *(a.rend()) << endl;
    cout << *it << endl;
    vector<int > :: iterator it = a.rbegin();  // reverse begin
    it++;
    // cout << *it << endl;
    


    vector<int> v = {29, 45, 071, 8, 06};
    cout << v.back() << endl;   //  v.back() prints the last element

    
    printing vector elements using iterator
    vector<int > v = {1,2,3,4,5};
    for(vector<int> :: iterator it = v.begin(); it != v.end(); it++) // condition er jaygay "it < v.end()" evabeo dewa jaito 
    {
    	cout << *it << " ";
    }


    // another way to print that vector
    vector<int > v = {1,2,3,4,6};
    for(auto it = v.begin(); it < v.end(); it++)  // auto diye automatically data type consider kora hoye jay, koshto kore ar data type lekhar lage na 
    {                                          //  Here, data type means iterator data type
    	cout << *it <<" ";
    }

    cout << endl;

    // another way to print that vector
    for(auto it : v)  // Agergula te (it) memory address indicate kortesilo but ekhane 'v' vector er element gulo ke indicate kortese ejonno *(it) dei nai 
    {
    	cout << it <<" ";
    }
    

    cout << endl;
    auto a = 20;  // auto diye automatically data type consider kora hoye jay, koshto kore ar data type lekhar lage na 
    cout << a << endl;   // Here data type emans int data type

    

    // Delete single element in vector
    vector<int> a = {3,7,2,0};
    vector<int> :: iterator it = a.begin()+3;
    a.erase(it);
    for(auto p : a) {
    cout << p <<" ";
    }
    

    // Define iterators for the range [start, end)
    // Delete elements in the range [start, end).  Mane ekhane end baad jabe na, end er ager ta baad jabe
    vector<int> a = {4,8,2,0,5,9};
    vector<int> :: iterator x = a.begin()+2;
    // vectro<int> :: iterator z = a.begin()+3;
    vector<int> :: iterator y = a.begin()+5;
    a.erase(x, y);
    for(auto p : a) {
    	cout << p <<" ";  // 4, 8, 9
    }


    Another example :  
    vector<int> v = {10,20,12,23,60};
    vector<int> :: iterator it1 = v.begin();
    vector<int> :: iterator it2 = v.begin()+2;
    vector<int> :: iterator it3 = v.begin()+4;
    // v.erase(it1, it3);  // 60
    v.erase(it2, it3);  // 10, 20, 60
    for(auto a : v) {
    	cout << a <<" ";
    }
    

    vector<int> v = {9,20,12,23,35};
    vector<int> :: iterator it1 = v.begin();
    vector<int> :: iterator it2 = v.begin()+2;
    vector<int> :: iterator it3 = v.begin()+4;
    
    v.erase(v.begin()+2, v.begin()+4);   // 
    for(auto a : v) {
    	cout << a <<" ";   // 9, 20, 35
    }



    <------- Insert function in vector ------>

    vector<int> v(2, 100);  // Ekhane bujhacche 2 ta 100 ase ei 'v' vector e. Mane {100, 100}
    v.insert(v.begin(), 3);
    for(auto a : v) {
    	cout << a << " ";   // {3, 100, 100}
    } cout << endl;


    // Another example -->
    Inserting single element
    vector<int> v(2, 100);  // {100, 100} --> Ekhane bujhacche 2 ta 100 ase ei 'v' vector e. Mane {100, 100}
    for(int i=0; i<2; i++) {
    	int value;
    	cin >> value;
    	v.push_back(value);
    }
    v.insert(v.begin(), 3); //  {3, 100, 100}
    for(auto a : v) {
    	cout << a << " ";   // final element in the vector---> {3, 100, 100, 2, 3}
    } cout << endl;
    

    vector<int > p = {1,2,3,4,5};
    p.insert(p.begin(), 9);
    // for(auto a: p) {
    // 	cout << a <<" ";
    // }

    vector<int> q = {340, 42};
    p.insert(p.begin()+2, q.begin(), q.end());
    for(auto a: p) {
    	cout << a <<" ";
    }	



    // Inserting multiple element
    vector<int> x(3, 50);
    x.insert(x.begin()+1, 2, 40);  // 2 is total number of elements that i wanna insert
                                  // 40 is the number i wanna insert  that means ---> (40,40)
    for(auto y : x) {
    	cout << y << " ";   // {50, 40, 40, 50, 50}

    }



    // Copying one vector to another vector
    vector<int> v1 = {300, 10, 10, 100, 100};
    vector<int> v2(2, 50);   // {50, 50}
    v1.insert(v1.begin(), v2.begin(), v2.end());   // first e v1.begin() disi karon v1 vector er fist e v2 vector er element boshbe
                                                   // pore jei vector copy korbo oi vector er start element ar end element boshabo
    for(auto a : v1) {
    	cout << a <<" ";  // {50, 50, 300, 10, 10, 100, 100} 
    }

    

    // size of vector 
    vector<int> v1 = {300, 10, 10, 100, 100};
    cout << v1.size();  // 5
    cout << endl;

    // popped up the last element (last element baad dewa)
    v1.pop_back();  // {300, 10, 10, 100}
    for(auto a : v1) {
    	cout << a <<" ";
    } cout << endl;
    


    swapping vector
    vector <int > v1 = {10, 20};
    vector <int > v2 = {30, 40};

    // before swapping
    for(auto a : v2) {
    	cout << a <<" ";  // v2 = {30, 40}
    } cout << endl;
    
    // after swapping
    v2.swap(v1);  // v2 = {10, 20}
    for(auto a : v2) {
    	cout << a <<" ";
    } cout << endl;


    v1.clear();  // Clear the entire vector
    for(auto a : v1) {
    	cout << a <<" ";  // { }
    }


    vector <int > v1 = {10, 20};
    cout << v1.empty();  // 0  ---> if the vector is cleared then it shows 1(true)
                             // if the vector is not cleared then it shows 0(false)
    

    vector <int > v1 = {10, 20};
    v1.clear(); 
    cout << v1.empty();  // 1 


}

int main() {

	  explainVector();
}
