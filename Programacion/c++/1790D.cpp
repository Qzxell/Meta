#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define ln '\n' 

using namespace std;

typedef long long ll;
typedef long double ld;

void solve() {
    map<int,int>v;
    int n;
    cin >> n;
    vector<int>val(n);
    for (int i = 0; i < n; i++) {
       cin >> val[i]; 
    }
    for (int i = 0; i < n; i++) {
        v[val[i]] ++;
        v[val[i]+1] = 0;
    }
    int ni = 0;
    int ans = 0;
    for (auto &x : v) {
        if (x.second > ni) {
            ans += x.second - ni;
        }
        ni = x.second;
        if (v[x.first+1]== 0) {
            ni = 0;    
        }
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
