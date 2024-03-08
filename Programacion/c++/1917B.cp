#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define ln '\n' 

using namespace std;

typedef long long ll;
typedef long double ld;

void solve() {
    int l;
    cin >> l;
    vector<int>v(l);
    string s;
    cin >> s;
    ll ans = 1;
    vector<int> vo(27,0);
    v[0] = 1;
    vo[s[0] - 'a'] = 1;;
    for (int i = 1; i < l; i++) {
        v[i] = v[i-1] + 1 - vo[s[i] -'a'];
        ans+=v[i];
        vo[s[i] - 'a'] =1;
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
