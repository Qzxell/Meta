#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define ln '\n' 

using namespace std;

typedef long long ll;
typedef long double ld;

void solve() {
    int n;
    cin >> n;
    vector<int>p;
    vector<int>im;
    int u;
    for (int i = 0; i < n; i++) {
        cin >> u;
        if (u&1) {
            im.push_back(u); 
        }else p.push_back(u);
    }
    bool one = 1,two = 1;
    for (int i = 1; i < sz(p); i++) {
        if (p[i] <p[i-1]) {
            one = false;
            break;
        } 
    }
    for (int i = 1; i < sz(im); i++) {
        if (im[i] < im[i-1]) {
            two = false;
            break;
        } 
    }
    cout << (one && two ? "YES" : "NO") << ln;
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
