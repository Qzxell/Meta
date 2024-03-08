#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define ln '\n' 

using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;

void solve() {
    int n,k;
    cin >> n>> k;
    vi v(n);
    vi ss;
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }
    ss = v;
    sort(ss.begin(), ss.end());
    map <int,int> m;
    for (int i = 0; i < n; i++) {
        m[ss[i]] = i; 
    }
    int cont = 0;
    for (int i = 1; i < n; i++) {
        if (m[v[i]] -1 != m[v[i-1]]) {
            cont++; 
        } 
    }
    cout << (cont < k ? "YES" : "NO") << ln;
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
