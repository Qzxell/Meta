#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
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
    vector<ll>ps(n+1,0);
    vi div;
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }
    for (int i = 1; i <= n; i++) {
        ps[i] = ps[i-1] + v[i-1]; 
    }
    for (int i = 1; i <= (int)sqrt(n); i++) {
        if (n%i==0) {
            if (n == i*i) {
                div.push_back(i); 
            }else{
                div.push_back(i); 
                div.push_back(n/i); 
            } 
        } 
    }
    sort(div.begin(), div.end());
    ll ans = 0;
    for (int i = 0; i < sz(div); i++) {
        ll k = 0;
        ll ma = 0;
        ll mi = 1e14;
        for (int j = div[i]; j <= n; j+= div[i]) {
            ll s = ps[j] - ps[j-div[i]];
            mi = min(mi,s);
            ma = max(ma,s);
        }
        ans = max(ma-mi,ans);
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
