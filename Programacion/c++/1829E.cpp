#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define ln '\n' 

using namespace std;

typedef long long ll;
typedef long double ld;

int bfs (int i,int j,vector<vector<bool>> &vis,vector<vector<int>>&ma){
    int n = sz(ma);
    int m = sz(ma[0]);
    int ans = ma[i][j];
    if (i + 1 < n && !vis[i+1][j] && ma[i+1][j] ) {
        vis[i+1][j] = 1;
        ans+= bfs(i+1,j,vis,ma); 
    }
    if (i - 1 >= 0&& !vis[i-1][j] && ma[i-1][j] ) {
        vis[i-1][j] = 1;
        ans+= bfs(i-1,j,vis,ma); 
    }
    if (j + 1 < m && !vis[i][j+1] && ma[i][j+1] ) {
        vis[i][j+1] = 1;
        ans+= bfs(i,j+1,vis,ma); 
    }
    if (j - 1 >= 0&& !vis[i][j-1] && ma[i][j-1] ) {
        vis[i][j-1] = 1;
        ans+= bfs(i,j-1,vis,ma); 
    }
    return ans ;
}

void solve() {
    int n,m;
    cin >> n >> m;
    vector<vector<int>>ma(n,vector<int>(m));
    vector<vector<bool>>vis(n,vector<bool>(m,0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> ma[i][j]; 
        } 
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (ma[i][j] && !vis[i][j]) {
                vis[i][j] = 1;
                ans = max(ans,bfs(i,j,vis,ma)); 
            }
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
