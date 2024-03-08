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
    cin  >> n;
    ll ans = 0;
    int t;
    vector<int>vis(3,0);
    for (int i = 0; i < n; i++) {
        cin >> t;
        t%=3;
        vis[t]++;
        ans +=t;
    }
    int a = ans%3;
    if (a == 0) {
        cout << 0 << ln; 
        return;
    }else if(a == 1)  {
        if (vis[1]!=0) {
            cout << 1 << ln; 
            return;
        }else{
            cout << 2 << ln; 
            return;
        }
    }else if (a == 2) {
            cout << 1 << ln; 
            return;
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
