#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define ln '\n' 

using namespace std;

typedef long long ll;
typedef long double ld;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }
    bool yes = 0;
    int ans = 0;
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (v[i]) {
            yes = 1;
        }
        if (v[i] == 0 && yes ) {
            c++;
        }else if(yes) {
            ans +=c;
            c= 0;
        } 
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
