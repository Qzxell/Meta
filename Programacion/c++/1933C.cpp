#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define ln '\n' 

using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;

void solve() {
    int a,b,l;
    vector<bool>vis(1000003,0);
    cin >> a >> b >> l;
    int aa=0,bb=0,rr;
    while (l % a == 0) {
       aa++;
       l/=a;
    }
    int ans = 0;
    if (a == b) {
        cout << aa+1 << ln;
        return;
    }
    for (int i = 0; i <= aa; i++) {
        int u = l;
        for (int j = 0; j < i; j++) {
           u*=a; 
        }
        if (vis[u] == 1) {
           ans--; 
        }
        vis[u] =1;
        int o = 0;
        while (u % b == 0) {
            o++;
            u/=b;
            if (vis[u] == 1) {
               ans--; 
            }
            vis[u] =1;
        }
        ans += o+1;
    }
    cout <<ans << ln;
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
