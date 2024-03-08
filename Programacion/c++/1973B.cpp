#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define ln '\n' 
using namespace std;

typedef long long ll;
typedef long double ld;

void solve() {
    int x,y;
    cin >> x >> y;
    cout << x - y + 1 + x - 1 - (y+1) + 1 << '\n';
    for (int i = y; i <= x; i++) {
        cout << i << " "; 
    }
    for (int i = x-1; i >= y+1; i--) {
        cout << i << ' '; 
    }
    cout <<'\n';

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
