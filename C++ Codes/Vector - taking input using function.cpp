#include <iostream>
#include <vector>
using namespace std;

void inputVector(vector<int> &myArray, int size) {
    for(int i=0; i<size; i++) {
     int element;
     cin >> element;   // taking input of element
     myArray.push_back(element);  // storing them into vector myArray
    }

}
int main() {
    int n;
    cin >> n;    // size how many elements I want to take
    vector<int > myVector; // vector
    inputVector(myVector, n);

    // printing element of vector of myArray
    for(int a : myVector) {
     cout << a << " " ;
    }

    return 0;
}


