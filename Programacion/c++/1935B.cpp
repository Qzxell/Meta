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
    int n;
    cin >> n;
    vi v(n);
    vector<bool> vis(n+1,0);
    int mex = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
        vis[v[i]] = 1;
    }
    while (vis[mex]) {
        mex++; 
    }
    vis.assign(n+1, 0);
    int lf = 0;
    int cuu = 0;
    for (int i = 0; i < n; i++) {
        vis[v[i]] = 1;
        while (vis[cuu]) {
            cuu++; 
        }
        if (cuu == mex) {
            lf = i;
            break;
        }
    }
    vis.assign(n+1, 0);
    cuu = 0;
    bool ans = 0;
    for (int i = lf + 1; i < n; i++) {
        vis[v[i]] = 1; 
        while (vis[cuu]) {
            cuu++; 
        }
        if (cuu == mex) {
            ans = 1;
            break;
        }
    }
    if (ans) {
        cout << 2 << ln;
        cout << 1 << ' ' << lf+1 << ln;
        cout << lf+2 << ' '<< n << ln;
    }else {
        cout << -1 << ln;
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
