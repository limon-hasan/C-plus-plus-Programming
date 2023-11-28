// Pattern - 7
// https://bit.ly/3VADLAt
// Coding-Ninja Problem

/*  

1 2 3 4
1 2 3
1 2
1

*/


void nStarTriangle(int n) {
for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i; j++) {
            cout << " ";
        }
        for(int j=1; j<=2*i-1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}


Or   ------------>

  
void nStarTriangle(int n) {
for(int i=0; i<n; i++) {
        for(int j=1; j<n-i; j++) {
            cout << " ";
        }
        for(int j=1; j<=2*i+1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}


Or   ------>   // printing space, then star, then space

(1)-------->

void nStarTriangle(int n) {
for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i; j++) {
            cout << " ";
        }
        for(int j=1; j<=2*i-1; j++) {
            cout << "*";
        }

        // last e space print na korleo hobe karon new line e gele space er proyojon nai, tobe dileo hoy
        for(int j=1; j<=n-i; j++) {   
            cout << " ";
        } 
        cout << endl;
    }
}        


(2)-------->

void nStarTriangle(int n) {
for(int i=0; i<n; i++) {
        for(int j=1; j<=n-i-1; j++) {
            cout << " ";
        }
        for(int j=1; j<=2*i+1; j++) {
            cout << "*";
        }
        for(int j=1; j<n-i-1; j++) {
            cout << " ";
        } 
        cout << endl;
    }
}        
