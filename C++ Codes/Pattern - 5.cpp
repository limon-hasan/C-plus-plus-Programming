// Pattern - 5
// https://bit.ly/3VADLAt
// Coding-Ninja Problem

/*  

* * * *
* * *
* * 
*

*/

void seeding(int n) {
for(int i=n; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}


Or ----->

void seeding(int n) {
for(int row=1; row<=n; row++) {
        for(int col=1; col<=n-row+1; col++)   // j <= n-i+1 mane inner loop e (n-i+1) porjonto star print hobe 
        {
            cout << "* ";
        }
        cout << endl;
    }
}  
