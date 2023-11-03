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
