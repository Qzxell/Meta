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
for (int i = 0; i < n; i++) {
    cin >> t;
    ans += abs(t); 
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
