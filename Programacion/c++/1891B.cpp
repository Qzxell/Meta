#include <bits/stdc++.h>
using namespace std;
#define sz(a) ((int)((a).size()))
#define ln '\n' 


typedef long long ll;
typedef long double ld;

void solve() {
    int n,q;
    cin >> n >> q;
    vector<int> v(n),x(q);
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }
    int mi = 1e9+2;
    for (int i = 0; i < q; i++) {
        cin >> x[i]; 
        if (x[i] < mi) {
            mi = x[i] ; 
            for (int j = 0; j < n; j++) {
                if (v[j] % (1<<x[i]) == 0) {
                    v[j] += (1<<(x[i]-1)); 
                } 
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';   
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
