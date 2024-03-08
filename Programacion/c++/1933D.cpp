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
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }
    sort(v.begin(), v.end());
    int r = v[0] % v[1] ;
    for (int i = 2; i < n; i++) {
        r %= v[i];
    }
    if (r!=0) {
        cout << "YES" << ln;
        return;
    }
     r = v[0];
    bool yes =0;
    for (int i = 1; i < n; i++) {
        if (v[i] %v[0] != 0) {
            yes = 1;
            break;
        }
    }
    cout << (yes ? "YES" : "NO") << ln;
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
