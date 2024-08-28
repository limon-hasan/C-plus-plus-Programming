// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_C

/*
                    #.#.
                    .#.#
                    #.#.
                    .#.#

                    #.#.#.
                    .#.#.#
                    #.#.#.
                    .#.#.#
                    #.#.#.
                    .#.#.#

                    #.#
                    .#.
                    #.#
*/

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
                if(i % 2 != 0) {
                    for(int j = 1; j <= w; j++) {
                        if(j % 2 == 0) {
                            cout <<".";
                        }
                        else {
                            cout <<"#";
                        }
                    }
                }
                else {
                     for(int j = 1; j <= w; j++) {
                         if(j % 2 == 0) {
                            cout <<"#";
                        }
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



//__________________________________________________________________________



//Or -->
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
                        if(i % 2 == 0) {
                            if(j % 2 == 0) {
                            cout <<".";
                        }
                        else {
                            cout <<"#";
                        }
                        }
                else {
                        if(j % 2 == 0) {
                            cout <<"#";
                        }
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



//____________________________________________________________________________



// Or -->
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
                        if((i + j) % 2 == 0) {
                            cout << "#";
                        }
                        else cout <<".";
                    }
                    cout << endl;
            }
            cout << endl;
        }
    }
}
