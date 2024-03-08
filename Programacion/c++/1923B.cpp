#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define ln '\n' 

using namespace std;

typedef long long ll;
typedef long double ld;

void solve() {
    int n,k;
    cin >> n >> k;
    vector<int>v(n);
    map <int,int> m;
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }
    int lo,lf;
    for (int i = 0; i < n; i++) {
        int t;
        cin >>t;
        if (t < 0) {
            t *= -1; 
        }
        m[t] += v[i]; 
    }
    ll b = 0;
    bool yes = 1;
    int can =0;
    for (auto x : m) {
        ll v,p;
        p = x.first;
        v = x.second - b;
        ll t = (v + k -1)/k;
        if (t  > p - can) {
            yes = 0;
            break;
        }
        b = t*1ll*k - v;
        can += t;
    }
    cout << (yes?"YES":"NO") << ln;
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
