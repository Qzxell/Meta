#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define pb push_back
#define ln '\n' 

using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;

void solve() {
    int n,k;
    cin >> n >> k;
    int ans = 0;
    int mod = 1e9 + 7;
    for (int i = 0; i < 31; i++) {
        if (1 & (k>>i)) {
            ll p = 1;
            for (int j = 0; j < i; j++) {
                p*= n ;
                p%= mod;
            }
            ans += p;
            ans %= mod;
        } 
    }
    cout << ans << ln;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--){
        solve();
    }
    return 0;
}
