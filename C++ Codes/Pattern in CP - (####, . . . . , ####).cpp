/*
                    ####
                    ....
                    ####
                    ....


                    ######
                    ......
                    ######
                    ......
                    ######


                    ###
                    ...
                    ###
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
                for(int j = 1; j <= w; j++) {
                    if(i %2 != 0) {
                        cout << "#";
                    }
                    else {
                        cout <<".";
                    }
                }
                cout << endl;
            }
            cout << endl;
        }
    }
}



//______________________________________________________



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
                if(i % 2 != 0) {
                    for(int i = 1; i <= w; i++) {
                        cout <<"#";
                    } 
                    cout << endl;
                }
                else {
                    for(int i = 1; i<=w; i++) {
                        cout <<".";
                    }
                    cout << endl;
                } 
            }
            cout << endl;
        }
    }
}



//____________________________________________________________________________________



// OR -->
#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1) {
        int h, w;
        cin >> h >> w;
        if(h == 0 && w == 0) break;
        else {
            int cnt = 0;
            for(int i = 1; i <= h; i++) {
                if(cnt % 2 == 0) {
                    for(int j = 1; j <= w; j++) {
                        cout <<"#";
                    }
                }
                else {
                    for(int k = 1; k<= w; k++) {
                        cout <<".";
                    } 
                }
                cout << endl;
                cnt++;
            }
        cout << endl;
    }
}
}