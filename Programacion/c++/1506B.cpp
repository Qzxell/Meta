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
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vi as;
    for (int i = 0; i < n; i++) {
        if (s[i] == '*') {
            as.pb(i); 
        } 
    }
    int ans = 1;
    int i = 1;
    while (i < sz(as)) {
        auto it = upper_bound( as.begin(), as.end(),as[i-1] + k); 
        i = (int)distance(as.begin(),it);
        ans++;
    }
    cout << ans << ln;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n = 1;
    while(n--){
        solve();
    }
    return 0;
}
