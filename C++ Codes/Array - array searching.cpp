// https://vjudge.net/contest/593723?fbclid=IwAR3fMvhxXIW_tnnaiVN0Nxih3i85m3wpM7I74dcjoqh8LxoaMxfGRUP_4-I#status//B/0/

/*
Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index).
Note: X may be found once or more than once and may not be found.
*/


#include <bits/stdc++.h>
using namespace std;

int searchArray(int arr[], int n, int a){
    for(int i=0; i<n; i++){
        if(a == arr[i]){
        return i; 
        }
    }
    return -1;
}

int main()
{
    int N;
    cin >> N;
    int A[N];
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    int X;
    cin >> X;
    int result = searchArray(A, N, X);
    cout << result;
    return 0;
}

------------------------------------------------


Or ---->

#include <bits/stdc++.h>
using namespace std;

int Search(int arr[], int size, int key, int &position) {
    for (int i = 0; i < size; i++) {
        if (key == arr[i]) {
            position = i;
            return 1; // Found
        }
    }
    return 0; // Not found
}

int main() {
        int N,pos;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        int value;
        std::cin >> value;
        if (Search(A, N, value, pos)) {
            cout << pos << std::endl;
        } else {
            cout << "-1" << std::endl;
        }
    return 0;
}  
