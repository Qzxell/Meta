#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define pb push_back
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
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }
    sort(v.begin(), v.end());
    int g= 0;
    for (int i = 1; i < n; i++) {
        g = gcd(g,v[i]- v[i-1]);     
    }

    int r;
    if (g == 0) {
        cout << 1<<ln;
        return;
    }else r = v[0]%g;
    ll y ;
    bool inn = false;
    for (int i = n-1; i >= 0; i--) {
        if (i == n-1) {
            y = (v[i] - r)/g;
            continue;
        }
        int u = (v[i] - r)/g;
        if (u != y - 1) {
            inn = true;
            y--;
            break;
        }
        y = u;
    }
    ll ans = 0;
    if (!inn) {
        y = ((v[n-1]- r)/g) ;
        y++;
        y*=g;
        y+=r;
        for (int i = 0; i < n; i++) {
            ans += (y - v[i])/g; 
        }
        cout << ans<<ln;
    }else{
        int o = v[n-1];
        int va = y*g + r;
        for (int i = 0; i < n; i++) {
            ans += (o - v[i])/g; 
        }
        cout << ans  + (o - va)/g  <<ln;
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
