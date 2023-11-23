//  Sort 0 1 2 --->   https://bit.ly/3DfQW0s
// Coding-Ninja Problem

/*********
Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated into ascending order.
***********/

// ----------------------------------------------------------------------

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] == 0)
        count0++;
        else if(arr[i] == 1)
        count1++;
        else
        count2++;
    }
    
    for(int i=0; i<count0; i++) {
        arr[i] = 0;
        
    }
    for(int j = count0; j<count0 + count1; j++) {
        arr[j] = 1;
    }
    for(int k = count0+count1; k<n; k++) {
        arr[k] = 2;
    }
}
