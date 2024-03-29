// Prblm link : https://www.codingninjas.com/studio/problems/rotate-array_1230543?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=SOLUTION

// left rotate array by three position
// Brute-force approach

// Time Complexity --> O(k) + O(n - k) + O(k) = O(n + k) 
// Space Complexity --> Extra space used will be O(k) because we are using a temporary array to store extra elements
#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> &arr, int k)
{
    int n = arr.size();
    // number of positions to rotate
    k = k % n;
    
    vector<int> temp;
    // storing into temp vector
    for(auto i = 0; i < k; i++)
    {
        temp.push_back(arr[i]);   // temp = {1, 2, 3}
    }

    // shifting to arr vector
    for(int i = k; i < n; i++)   // i = k = 3
    {
        arr[i - k] = arr[i];    // arr = {4, 5, 6, 7}  -->  Here, i-th index moves to the (i-k) index. For example --> arr = {1,2,3,4,5,6,7} ekhane left rotation by k = 3 position hole 3rd index(4)  0th index(3 -3 = 0) e ashbe, 4th index(5)  1st index(4 - 3 = 1) e ashbe
    }

    // put them from temp into arr vector [using mathematical calculation]
    for(int i = n - k; i < n; i++)   // i = n-k = 7-3 = 4
    {
        arr[i] = temp[i - (n - k)];   // arr = {1, 2, 3} --> Here, if we subtract (n-k) from i then we get the indexes respectively 0,1,2 of temp vector which moves to the indexes 4,5,6 of arr vector
    }

    /*  uporer last loop ta evabeo lekha jay -> put them from temp into arr vector [without mathematical calculation]
    int j = 0;
    for(int i = n - k; i<n; i++) {
        arr[i] = temp[j];
        j++;
    }
    */
    return arr;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr;    // {1, 2, 3, 4, 5, 6, 7}
    for(int i = 0; i<n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    int d;
    cin >> d;
    rotateArray(arr, d);

    for(auto a : arr)
    {
        cout << a << " ";    // 4, 5, 6, 7, 1, 2, 3
    }
    cout << endl;
}
