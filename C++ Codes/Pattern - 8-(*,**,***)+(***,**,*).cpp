/*********
 *
 ***
*****
*****
 ***
  * 
*************/

// https://bit.ly/3IqmG9k


void nStarDiamond(int n) {
    // Write your code here.
    for(int i=1; i<=n; i++) {
        for(int j=1; j<n-i+1; j++) {
            cout << " ";
        }
        for(int j=1; j<=2*i-1; j++) {
            cout << "*";
        }
        for(int j=1; j<n-i+1; j++) {
            cout << " ";
        }
        cout << endl;
    }
    // for printing again from reverse position 
        for(int i=1; i<=n; i++) {  // n = 3
            for(int j=1; j<i; j++) {
                cout << " ";
            }
            for(int j=1; j<=2*n-(2*i-1); j++) {
                cout << "*";
            }
            for(int j=1; j<i; j++) {
                cout << " ";
            }
            cout << endl;
        }
}
