#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))

using namespace std;

typedef long long ll;
typedef long double ld;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    int p = 0, im = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
        if (v[i] % 2 == 1 && i% 2 == 0) {
            p++; 
        }
        if (v[i] % 2 == 0 && i% 2 == 1) {
            im++; 
        }
    }
    int ans = p;
    if (p != im) {
        cout << -1 << '\n'; 
    }else {
        cout << ans << '\n';
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
