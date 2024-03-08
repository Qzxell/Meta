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
    string s;
    cin >> n >> s;
    reverse(s.begin(), s.end());
    vector<bool>vis(100005,true);
    vi v;
    ll c = 0;
    int ind = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            v.pb(i);
        } 
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            cout << c << ' ' ;
            continue;
        } 
        auto it = upper_bound(v.begin() + ind, v.end(), i);
        if (it == v.end()) {
            cout << -1 << ' ';
            continue;
        }
        ind = distance(v.begin(),it) + 1;
        c += *it - i;
        s[*it] = '1';
        cout << c <<' ' ;
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
