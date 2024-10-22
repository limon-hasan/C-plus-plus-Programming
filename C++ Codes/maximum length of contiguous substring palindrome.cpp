#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define p(x) printf("%lld\n", x)
#define p2(x) printf("%lld %lld\n", x)
#define pf(x) printf("%lf\n", x)
#define s(x) scanf("%lld", &x)
#define sf(x) scanf("%lf", &x)
#define INF (long long)2000000000000000000
using namespace std;

const int mx = 134;
char s[mx];

int palindrome(string str) {
	int n = str.size();
	for(int i = 0; i < n; i++) {
		if(str[i] != str[n - 1 - i]) return false;
	}
	return true;
}

void solve() {
	cin >> s;
	int len = 0; 
	while(s[len] != '\0') len++;

	int ans = 1;
	for(int i = 0; i < len; i++) {
		for(int j = i + 1; j <= len; j++) {
			string t = "";
			for(int k = i; k < j; k++) {
				t += s[k];
			}
			if(palindrome(t)) {
				ans = max(ans, j - i);
			}
		}
	}
	cout << ans << endl;
} 

int main() {
  	ios_base::sync_with_stdio(false);
    cin.tie(0);

  	// int t;
  	// cin >> t;
  	// while(t--) {
		solve();
  	// }
}
