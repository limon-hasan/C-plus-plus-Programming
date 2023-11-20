//   https://bit.ly/3Il0c7n 
// Coding-Ninja problem  --- Time Limit Exceed


#include <bits/stdc++.h>
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> outArr;
    for(int i=0; i<n; i++)
    {                               // arr1 = {1,2,2,2,3,4}
        for(int j=0; j<m; j++)      // arr2 = {2,2,3,3}
        {
            if(arr1[i] == arr2[j])
            {
                outArr.push_back(arr1[i]);
                arr2[j] = INT_MIN; // value update korsi 
				// othoba INT_MIN er jaygay jekono ekta random number like -112231 dileo hobe
                break;  // break korsi karon jehetu mile gese tai ar 2nd loop e check korar dorkar nai 
            }
        }  // in the QN, we are said that we don't need to print anything that's whywe didn't print anything here
    }
    return outArr;  // outArr = {2,2,3}
}

/*
int main() {
	int T;
	cin >> T;
	for(int i=1; i<=T; i++) {
		int N, M;
		cin>> N>> M;
		vector<int> A;
		for(int i=0; i<N; i++) {
			int element1;
			cin>> element1;
			A.push_back(element1);
		}cout << endl;
		vector<int> B;
		for(int i=0; i<M; i++){
			int element2;
			cin>> element2;
			B.push_back(element2);
		}
		vector<int> outArr = findArrayIntersection(A,N, B,M);
		return 0;
	}
}*/
