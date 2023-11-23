/********** 
You are given an array/list size of N integer. 
Your task is to find all the distinct triplets present in the array which adds up to add number k. 
An array is said to have triplet (Arr[i], Arr[j], Arr[k]) with sum = K.
*************************/


//  https://bit.ly/3GbgVs3
// Time Limit Exceed

// Coding-Ninja Problem

  
#include <bits/stdc++.h>
vector<vector<int>> findTriplets(vector<int>arr, int n, int K)  {

    vector<vector<int>> triplet;
    set<vector<int>> unique;

    for(int i=0; i<n-2; i++) {
        for(int j=i+1; j<n-1; j++) {
            for(int k=j+1; k<n; k++) {
                if(arr[i] + arr[j] + arr[k] == K) {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);

                    sort(temp.begin(), temp.end());
                    if(unique.find(temp) == unique.end()) {                             
                        triplet.push_back(temp);
                        unique.insert(temp);
                    }
                }
            }
        }
    }
    return triplet;
}
