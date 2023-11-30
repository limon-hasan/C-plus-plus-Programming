/*

*********
 *******
  *****
   ***
    *

*/

// (1) ==========>
  
void print6(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<i; j++) {
            cout << " ";
        }
        for(int j=0; j<(2*n-(2*i+1)); j++) {
            cout << "*";
        }
        for(int j=0; j<i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}


// Or ------------->
 
// (2) =========>

void print7(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=0; j<i-1; j++) {
            cout << " ";
        }
        for(int j=1; j<=(2*n-(2*i-1)); j++) {
            cout << "*";
        }
        for(int j=0; j<i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}  


// Or ----->

// (3) ====>

void print5(int n) {
    for(int i=n; i>=1; i--) {
        for(int j=1; j<=n-i; j++) {
            cout << " ";
        }
        for(int j=1; j<=2*i-1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}  
