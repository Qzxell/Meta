#include <bits/stdc++.h>
using namespace std;
#define sz(a) ((int)((a).size()))


typedef long long ll;
typedef long double ld;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    int ma = 0;
    ll ss = 0;
    bool cer = true;
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
        if (v[i]) {
            cer = false; 
        }
        ss += v[i];
        ma = max(v[i],ma);
    }
    if (cer) {
        cout << 0 << '\n'; 
    }else if (ma*2 <= ss) {
        cout << 1 << '\n'; 
    }else cout << 2*ma -ss << '\n';
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
