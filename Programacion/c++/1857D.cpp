#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define ln '\n' 

using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<pair<int,int>> vii;

void solve() {
    int n;
    cin >> n;
    vii c(n);
    int t;
    for (int i = 0; i < n; i++) {
        cin >>t;
        c[i] = {t,i+1}; 
    }
    for (int i = 0; i < n; i++) {
        cin >>t;
        c[i].first -= t; 
    }
    sort(c.begin(), c.end());
    reverse(c.begin(), c.end());
    int ans = 0;
    int va = c[0].first;
    vector<int>v;
    for (int i = 0; i < n; i++) {
        if (c[i].first == va) {
            ans ++;
        v.push_back(c[i].second);
        }
    }
    cout << ans << ln;
    sort(v.begin(), v.end());
    for (int i = 0; i < sz(v); i++) {
        cout << v[i] << ' '; 
    } 
    cout << ln;

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
