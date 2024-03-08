#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define ln '\n' 

using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;

void solve() {
    int n,q;
    cin >> n ;
    vi v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }
    vi ps(n+1,0);
    for (int i = 1; i <= n; i++) {
        ps[i] = ps[i-1] + v[i-1]; 
    }
    int l,u;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> l >> u;
        int x = ps[l-1];
        auto it = upper_bound(ps.begin(), ps.end(),x+u);
        int lo = distance(ps.begin(),it) ;
        if (it == ps.end()) {
            cout << sz(v) << ' ';
            continue;
        }
        if (lo == l) {
            cout << lo << ' ';
            continue;
        }
        if (ps[lo]-x >= u  + (u- ps[lo-1]+x) + 1) {
           lo--; 
        }
        cout << lo <<' ';
    }
    cout << ln;
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
