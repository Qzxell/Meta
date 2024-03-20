#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))

using namespace std;

typedef long long ll;
typedef long double ld;

void solve() {
    int n;
    cin >> n;
    vector<pair<ll,int>> v(n);
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v[i] = {t,i};
    }
    sort(v.begin(), v.end());
    ll las = 1;
    int co = 0;
    vector<pair<int,int>> ans;
    for (int i = 0; i < n; i++) {
        if (v[i].first % las != 0) {
            co++;
            ans.push_back({v[i].second + 1,las - v[i].first%las});
            las = v[i].first + las - v[i].first%las;
            continue;
        }
        las = v[i].first;
    }
    cout << co << '\n';
    for (int i = 0; i < (int)ans.size(); i++) {
        cout << ans[i].first << ' '<<ans[i].second << '\n'; 
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
