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
    int k,n,m;
    cin >> k >> n >> m;
    vi a(n),b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i]; 
    }
    int i = 0,j = 0;
    int c = 0;
    bool yes = 1;
    vector<int> ans ;
    while (i <= n or j <= m) {
        if (a[i] > k + c && b[j] > k+c) {
            yes = 0;
            break;
        }
        if (a[i] <= k +c) {
            if (a[i]==0) {
                c++;
            }
            ans.push_back(a[i]); 
            if (i != n-1) {
                i++;
            }
        }
        if (b[j] <= k +c) {
            if (b[j]==0) {
                c++;
            }
            ans.push_back(b[j]); 
            if (j != m-1) {
                j++;
            }
        }
    }
    if (yes && sz(ans) == m+n) {
        for (int i = 0; i < sz(ans); i++) {
            cout << ans[i] << ' '; 
        }    
        cout << ln;
    }else {
        cout << -1 << ln;
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
