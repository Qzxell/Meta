#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define ln '\n' 

using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;

void solve() {
    int n;
    cin >> n;
    vi v(n);
    vi ans(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }
    ans[0] = 0;
    for (int i = 1; i < n; i++) {
        if ((v[i]&v[i-1]) == v[i-1]) {
            ans[i] = 0;
            continue; 
        }
        int o = 0;
        for (int j = 0; j < 31; j++) {
            if ( ((v[i-1]>>j) &1 ) && !(1 & (v[i]>>j))) {
                o = (o | (1<<(j)));
            } 
        }
        v[i] |= o;
        ans[i] = o;
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << ' '; 
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
