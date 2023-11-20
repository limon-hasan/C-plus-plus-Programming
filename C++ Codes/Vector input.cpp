#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;    // size how many elements I want to take
    vector<int > arra; // vector
    for(int i=0; i<n; i++) {
     int element;
     cin >> element;   // taking input of element
     arra.push_back(element);  // storing them into vector arra
    }

    for(int a : arra) {
     cout << a << " " ;
    }

    return 0;
}



// Again --->
//  Without taking input of vector from user --->

/*
    vector < int > myVector = {2,5,7,9,1};
    for(int i: myVector) {
      cout << i << " ";
    }
}

*/
