#include <bits/stdc++.h>
using namespace std;
#define sz(a) ((int)((a).size()))
#define ln '\n' 

typedef long long ll;
typedef long double ld;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    int ind,cos, f;
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
        if (v[i] == 1) {
            ind = i; 
        }
        if (v[i] == 2) {
            cos = i; 
        }
        if (v[i] == n) {
            f = i; 
        }
    }
    if ((f > ind && f < cos )|| (f > cos && f < ind)) {
        cout << 1 << ' '<< 1 << ln; 
    }else if (f < ind && f < cos) {
        cout << f+1 << ' ' << min(cos,ind)+1 << ln; 
    }else if (f > ind && f > cos) {
        cout << f+1 << ' ' << max(cos,ind)+1 << ln; 
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
