#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))

using namespace std;

typedef long long ll;
typedef long double ld;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<bool> vis(n+1,0);
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }
    sort(v.begin(), v.end());
    int me = 1;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] <= n && v[i]>= 1 && !vis[v[i]]) {
            vis[v[i]] = 1; 
            while (vis[me]) {
                me++; 
            }
            continue;
        }
        //if ( v[i] % (v[i] - me) == 0) {
            //cout << -1 << '\n'; 
            //return;
        //} 
        if (!(me < (v[i]+1)/2)) {
            cout << -1 << '\n'; 
            return;
        }
        vis[me] = 1;
        ans ++ ;
        while (vis[me]) {
            me++; 
        }
    }
    if (me < n) {
        cout << -1 << '\n'; 
    }else cout << ans << '\n';
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
