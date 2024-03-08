#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))

using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;

void solve() {
    int n;
    cin >> n;
    vi v(n);
    vi ps(n+1,0);
    map <int,int> num;
    for (int i = 0; i < n; i++) {
        cin >>v[i]; 
    }
    for (int i = 1; i <= n; i++) {
        ps[i] = ps[i-1] + v[i-1]; 
        num[ps[i]] = i;
    }
    int s = ps[n];
    int ans = 1e9+2;
    for (int i = 1; i <= n; i++) {
        if (s % ps[i] != 0) {
            continue; 
        }
        int gro = 0;
        int id = 0;
        bool yes = 1;
        for (ll j =  ps[i]; j <= s; j+=ps[i]) {
            if (num[j] > 0) {
                gro = max(gro,num[j] - id); 
                id = num[j];
            }else {
                yes = 0;
                break;
            }  
        }
        if (yes) {
            ans = min(ans,gro); 
        }

    }
    cout << ans << endl;
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
