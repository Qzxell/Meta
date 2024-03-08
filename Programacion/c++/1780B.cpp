#include <bits/stdc++.h>
using namespace std;
#define ln '\n' 
#define sz(a) ((int)((a).size()))


typedef long long ll;
typedef long double ld;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<ll> ps(n + 1,0);
    ll s = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
        s += v[i];
    }
    for (int i = 1; i <= n; i++) {
        ps[i] = ps[i-1] + v[i-1]; 
    }
    ll ma =0 ;
    for (int i = 1; i < n; i++) {
        ma = max(ma,gcd(s,ps[i])); 
    }
    cout << ma << ln;
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
