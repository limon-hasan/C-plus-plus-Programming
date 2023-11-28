// Pattern - 3
// https://bit.ly/3CiWV74
// Coding-Ninja Problem

/*  

1
1 2 
1 2 3
1 2 3 4

*/

void nTriangle(int n) {
for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << j <<" ";
        }
        cout << endl;
    }
}
