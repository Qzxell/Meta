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
    int n,m,d;
    cin >> n >> m >> d;
    vi p(100003);
    vi a(m);
    int  t;
    for (int i = 0; i < n; i++) {
        cin >> t;
        p[t] = i+1;
    }
    for (int i = 0; i < m; i++) {
        cin >> a[i]; 
    }
    int ans = 1e9;
    for (int i = 1; i < m; i++) {
        if (p[a[i]] < p[a[i-1]] || p[a[i]] > p[a[i-1]] + d) {
            ans = 0;
            break;
        }
        ans = min(ans, p[a[i]] - p[a[i-1]] );
        if (p[a[i-1]] + d + 1 <= n + p[a[i-1]] -1) {
            ans = min(ans, p[a[i-1]] + d + 1 - p[a[i]] );
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
