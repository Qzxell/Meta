#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define pb push_back
#define ln '\n'

using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<string> v(2);
    cin >> v[0] >> v[1];
    int x = 0,y =0;
    int c = 1;
    string ans ;
    while (y < n) {
       if (x == 1) {
            ans += v[x][y];
            y+=1; 
            continue;
       } 
       if (y == n-1 && x == 0) {
            ans+=v[x][y];
            x++; 
            continue;
       }
       if (v[x][y+1] < v[x+1][y]) {
            c = 1;
            ans+=v[x][y];
            y++; 
       }else if (v[x][y+1] > v[x+1][y]) {
            ans+=v[x][y];
            x++; 
       }else {
            ans+=v[x][y];
            c++;
            y++;
       }
    }
    cout << ans <<ln << c << ln;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
