// Coding Ninja Problem
//  https://bit.ly/3y01Zdu 


int findUnique(int *arr, int size)   // int findUnique(int arr[], int n)  evabeo likha jabe
 {
    int ans = 0; 
    for(int i=0; i<size; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
 }
