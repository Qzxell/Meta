#include <bits/stdc++.h>
using namespace std;
#define sz(a) ((int)((a).size()))
#define pb push_back
#define ln '\n' 


typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    int ans = 1;
    while (ans <= n/2) {
        ans <<= 1; 
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
