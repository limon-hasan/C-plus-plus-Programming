(1)     // <--- CODE --->

    
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



(2)  // Pseudocode
// <---- Binary Search Algorithm (Pseudocode)------>

    
begin binarySearch(a, n, data)
    a <--- sorted array
    n <--- size of array
    x <--- value to be searched
    set leftValue = 0
    set rightValue = n-1

    while leftValue <= rightValue
        set midPoint = (leftValue + rightValue) / 2

        if a[midPoint] == x
            return midPoint
        end if

        if a[midPoint] < x
            set rightValue = midPoint - 1
        end if

        if a[midPoint] > x
            set leftValue = midPoint + 1
        end if
    end while

    if data not found   // or,  if leftValue > rightValue
        return -1
end binarySearch
    













    
