#include <bits/stdc++.h>
using namespace std;
#define sz(a) ((int)((a).size()))
#define ln '\n' 


typedef long long ll;
typedef long double ld;

void solve() {
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    map <int,bool> vis;
    int mex = 0;
    int mm = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        if (!vis[v[i]]) {
            ans++; 
            vis[v[i]] = 1;
        }
        mm = max(mm,v[i]);
        if (v[i] == mex) {
            mex++; 
        }
    }
    if (mex != n) {
        if (!vis[(mex + mm + 1)/2] && k > 0) {
            ans++;
        }
        cout << ans << ln;
    }else {
        cout << ans + k<<ln;
    }
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
