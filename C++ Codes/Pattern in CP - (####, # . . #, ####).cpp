// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_B

/*
                    ####
                    #..#
                    ####

                    ######
                    #....#
                    #....#
                    #....#
                    ######

                    ###
                    #.#
                    ###
*/

// (1)  --> 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1) {
        int h, w;
        cin >> h >> w;
        if(h == 0 && w == 0) break;
        else {
            for(int i = 1; i <= h; i++) {
                for(int j = 1; j <= w; j++) {
                    if(i == 1 || i == h) {
                        cout << "#";
                    }
                    else {
                        cout <<"#";
                        for(int k = 2; k <= w - 1; k++) {
                            cout << ".";
                        }
                        cout <<"#";
                        break;
                    }
                }
                cout << endl;
            }
            cout << endl;
        }
    }
}



// -------------------------------------------------------------------------------------------------------------------



// OR -->

// (2)  --> 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1) {
        int h, w;
        cin >> h >> w;
        if(h == 0 && w == 0) break;
        else {
            for(int i = 1; i <= h; i++) {
                for(int j = 1; j <= w; j++) {
                    if(i == 1 || i == h) {
                        cout << "#";
                    }
                    else {
                        if(j == 1 || j == w) cout <<"#";
                        else {
                            cout <<".";
                        }
                    }
                }
                cout << endl;
            }
            cout << endl;
        }
    }
}



//_______________________________________________



// OR --> 
// (3)  --> 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1) {
        int h, w;
        cin >> h >> w;
        if(h == 0 && w == 0) break;
        else {
            for(int i = 1; i <= h; i++) {
                if(i == 1 || i == h) {
                    for(int i = 1; i <= w; i++) {
                        cout <<"#";
                    } 
                    cout << endl;
                }
                else {
                    cout <<"#";
                    for(int i = 2; i <= w - 1; i++) {
                        cout <<".";
                    }
                    cout <<"#"; 
                    cout << endl;
                } 
            }
            cout << endl;
        }
    }
}



//________________________________________________________________________________________



// OR -->
#include<bits/stdc++.h>
using namespace std;

int main() {
    while(1) {

        int h, w;
        cin >> h >> w;
        if(h == 0 && w == 0) break;
        else {
            for(int i = 1; i <= w; i++) {
                cout <<"#";
            } cout << endl;

            for(int i = 2; i <= h-1; i++) {
                cout <<"#";
                for(int j = 2; j <= w -1; j++) {
                    cout <<".";
                }
                cout <<"#";
                cout << endl;
            }

            for(int i = 1; i<= w; i++) {
                cout <<"#";
            }
            cout << endl << endl;
        }
    }
}
