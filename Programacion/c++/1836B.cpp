#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define ln '\n' 

using namespace std;

typedef long long ll;
typedef long double ld;

void solve() {
    ll n,k,g;
    cin >> n >> k >> g;
    if (g == 2) {
        cout << 0 << ln;
        return;
    }
    ll ans = 0;
    int y = (k*g)/((g+1)/2 - 1) >= n? n : (k*g)/((g+1)/2 - 1);
    ll r = (k*g) - ((g+1)/2 - 1)*(y);
    ans += r/g;
    if (r % g > 0 && (k*g)/((g+1)/2 - 1) >=n) {
        ans ++; 
    }
    cout << k*g - ans*g << ln;
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
