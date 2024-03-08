#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define pb push_back
#define ln '\n' 

using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;

int val[5] = {1,3,6,10,15};
void solve() {
    int nn;
    cin >> nn;
    int ans = 0;
    for (int i = 4 ; i >= 0; i--) {
        if (nn >=val[i]) {
           ans += nn/val[i];
           nn %= val[i];
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
