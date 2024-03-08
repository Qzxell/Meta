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
    ll pat = 0;
    int nopat = 0;
    int ans = 1;
    for (int i = 0; i < n; i++) {
        pat += v[i];
        if (nopat && v[i] ) {
            ans = 0;
            break;
        }
        if (pat <= 0) {
            nopat = 1; 
        }
    }
    cout << (ans && pat == 0 ? "Yes" : "No") << ln;
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
