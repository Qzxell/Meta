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
    int n,m;
    cin >> n ;
    vector<string> ma(n,string(n,' '));
    for (int i = 0; i < n; i++) {
        cin >> ma[i]; 
    }
    int ans = 0;
    for (int i = 0; i <= n/2; i++) {
        for (int j = 0; j <= n/2; j++) {
            int c = 0;
            int x = i,y = j;
            int t;
            c += ma[x][y] - '0';
            t = y;
            y = n - x -1;
            x = t;   
            c += ma[x][y] - '0';
            t = y;
            y = n - x -1;
            x = t;   
            c += ma[x][y] - '0';
            t = y;
            y = n - x -1;
            x = t;   
            c += ma[x][y] - '0';
            ans += min(c,4-c);
            x = i,y = j;
            ma[x][y] = '0';
            t = y;
            y = n - x -1;
            x = t;   
            ma[x][y] = '0';
            t = y;
            y = n - x -1;
            x = t;   
            ma[x][y] = '0';
            t = y;
            y = n - x -1;
            x = t;   
            ma[x][y] = '0';
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
