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


-------------------------------------------------------------

// Returning vector from a function 

    
#include <iostream>
#include <vector>
using namespace std;

vector<int> inputVector(vector<int> arrayVector, int size)   // 'inputVector' holo function and eta jehetu ekta vector rturn korbe tai eitar return type vector hobe 'vector<int>'
{
    for(int i=0; i<size; i++) {
      int element;
      cin >> element;   // storing them into vector myArray
      arrayVector.push_back(element);    // storing them into vector myArray
    }
    return arrayVector;
}

int main() {
    vector<int> myVector;    // Initialize the vector in the main function
    int n;
    cin >> n;    // size how many elements I want to take
    vector<int>outVector = inputVector(myVector, n);   // Call the function to populate the vector and receive the modified vector by another vector 'outVector'
                                                      //  Ei line ta emneo likha jay ---> 
                                                      /*  vector<int> outVector;
                                                          outVector = inputvector(myVector, n);    */       
    
    //printing the element of vector 'myVector' from 'inputVector' function
    for(int a : outVector) {
     cout << a << " ";
    }
    return 0;
}
