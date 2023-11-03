#include <bits/stdc++.h>
using namespace std;

int binarySearch(int Arr[], int N, int data)
{
    int l = 0, r = N-1;  // index
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(data == Arr[mid])
            return mid;  // mid is index
        else if(data < Arr[mid])
            r = mid-1;
        else
            l = mid+1;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
    int key;
    cin >> key;
    cout << binarySearch(arr, n, key) << endl;
}
