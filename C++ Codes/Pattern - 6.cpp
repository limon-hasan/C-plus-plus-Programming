// Pattern - 6
// https://bit.ly/3VADLAt
// Coding-Ninja Problem

/*  

1 2 3 4
1 2 3
1 2
1

*/

void nNumberTriangle(int n) {
for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i+1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
