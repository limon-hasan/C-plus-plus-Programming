(1)   // Code


#include <bits/stdc++.h>
using namespace std;

int linearSearch(int Arr[], int N, int data)
{
    for(int i=0; i<N; i++)
    {
        if(Arr[i] == data)
        {
            return i;
        }
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
    cout << linearSearch(arr, n, key) << endl;

}

----------------
(2)   // Pseudocode 
    

begin linearSearch(a, n, data)
    a <--- array to search
    n <--- size of array
    x <--- value to be searched

    for each index from 0 to n-1
        if a[index] equals x
            return index
        end if
    end for

    if data not found
        return -1
end linearSearch
