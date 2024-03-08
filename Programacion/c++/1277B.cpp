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
    map <int,bool> vis;
    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (vis[v[i]]) {
            continue; 
        }
        int c =0 ;
        vis[v[i]] = 1;
        while (v[i] % 2==0) {
            c++;
            v[i] >>=1;
            vis[v[i]] = 1;
        }
        ans += c;
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
