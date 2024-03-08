#include <bits/stdc++.h>
#define ln '\n' 
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;

int main() {
    int q;
    cin >> q;
    vector<vector<int>> dp(200005, vector<int>(31, 0));

    for (int i = 1; i <200005; i++) {
        for (int j = 0; j < 31; j++) {
            if (i & (1<<j)) {
                dp[i][j] ++;
            }
            dp[i][j] += dp[i-1][j]; 
        } 
    }
    for (int i = 0; i < q; i++) {
        int l,r;
        cin >> l >> r;
        int ans = 0;
        for (int i = 0; i < 31; i++) {
            ans = max(ans ,dp[r][i] - dp[l-1][i] );
        }
        cout << r-l + 1- ans << ln;
        
    }
    return 0;
}
