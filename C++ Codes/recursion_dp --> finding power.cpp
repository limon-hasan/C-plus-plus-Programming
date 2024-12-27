//  <---   BISMILLAHIR RAHMANIR RAHIM  --->



#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define INF (long long)2000000000000000000
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define optimize() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define mem(a,b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))

// const int mx = 1e9 + 123;
// vector<int> arr(mx, 0);
// int arr[mx];
// int b[mx];
// int v[mx];

int dp[100005];
// int mark[100005];

int power(int a, int b) {
    if(b == 0) return 1;
    if(b % 2 == 0) {
        int result = power(a, b / 2);
        return result * result;
    }
    else {
        return power(a, b - 1) * a;
        // return result;
    }
}
void solve() {
    // mem(dp, -1);
    // memset(dp, -1, sizeof(dp));
    int a, b; cin >> a>> b;
    cout << power(a, b) << endl;  // 0 1 1 2 3 5 8
}

int main() {
    optimize();

    // int t;
    // cin >> t;
    // while(t--) {
        // mem(arr, 0);
        solve();
    // }
}

