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
    vector<string> ma(n, string(n, ' '));
    for (int i = 0; i < n; i++) {
        cin >> ma[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (ma[i][j] == ma[i][n - j - 1] && ma[i][j] != ma[n - i - 1][j]) {
                ma[n - i - 1][j] = ma[i][j];
                ans++;
            } else if (ma[i][j] != ma[i][n - 1 - j] && ma[i][j] == ma[n - i - 1][j]) {
                ma[i][n - 1 - j] = ma[i][j];
                ans++;
            } else if (ma[i][j] != ma[i][n - 1 - j] && ma[i][j] != ma[n - i - 1][j]) {
                ma[i][j] = ma[i][n - 1 - j];
                ans++;
            }
        }
    }
    cout << ans << ln;
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

