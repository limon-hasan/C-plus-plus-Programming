
/*
                    ####
                    ####
                    ....
                    ....


                    ######
                    ######
                    ......
                    ......
                    ######


                    ###
                    ###
                    ...
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
            int cnt = 0;
            for(int i = 1; i <= h; i+=2) {
                if(cnt % 2 == 0) {
                    for(int j = 1; j <= w; j++) {
                        cout <<"#";
                    } cout << endl;
                    if(i == h) break;
                    for(int j = 1; j <= w; j++) {
                        cout <<"#";
                    } 
                }
                else {
                    for(int k = 1; k<= w; k++) {
                        cout <<".";
                    } cout << endl;
                    if(i == h) break;
                    for(int p = 1; p <= w; p++) {
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
