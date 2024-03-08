#include <bits/stdc++.h>
using namespace std;
#define sz(a) ((int)((a).size()))
#define ln '\n'  

typedef long long ll;
typedef long double ld;

void solve() {
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }
    int ans = (n/2)*6;
    int p;
    if (n&1) {
        ans += 3; 
        p = n-3;
    }else p = n;
    
    cout << ans << ln;

    for (int i = 0; i < p; i+= 2) {
        cout << 1 << ' '<< i+1 << ' '<<i+2<<ln; 
        cout << 2 << ' '<< i+1<< ' '<<i+2<<ln; 
        cout << 1 << ' '<< i+1 << ' '<<i+2<<ln; 
        cout << 1 << ' '<< i+1 << ' '<<i+2<<ln; 
        cout << 2 << ' '<< i+1 << ' '<<i+2<<ln; 
        cout << 1 << ' '<< i+1<< ' '<<i+2<<ln; 
    }
    if (n&1) {
        int i = n-3;
        cout << 1 << ' '<< i+1 << ' '<<i+2<<ln; 
        cout << 2 << ' '<< i+1<< ' '<<i+2<<ln; 
        cout << 1 << ' '<< i+1 << ' '<<i+2<<ln; 
        cout << 1 << ' '<< i+2 << ' '<<i+3<<ln; 
        cout << 2 << ' '<< i+2<< ' '<<i+3<<ln; 
        cout << 1 << ' '<< i+2 << ' '<<i+3<<ln; 
        cout << 1 << ' '<< i+1 << ' '<<i+3<<ln; 
        cout << 2 << ' '<< i+1<< ' '<<i+3<<ln; 
        cout << 1 << ' '<< i+1 << ' '<<i+3<<ln; 
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
