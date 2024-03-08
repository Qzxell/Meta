/*
*
* ///,        ////
*  \  /,      /  >.
*   \  /,   _/  /.
*    \_  /_/   /.
*     \__/_   <    
*     /<<< \_\_ 
*    /,)^>>_._ \
*    (/   \ /\\
*         // 
* ======((=======
*/

#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii; 
typedef vector<int> vi ;
typedef vector<ii> vii; 
typedef long long ll;

#define sz(a) ((int)((a).size()))
#define pb push_back

void solve() {
    int n,x;
    cin >> n >> x;
    int p;
    for (int i = 0; i < n; i++) {
        cin >> p;
        int d = p/x;
        int r = p % x;
        bool yes = 0;
        if (r == 0) {
            cout << "YES\n";
            continue;
        }
        int cant = 0;
        while (r % 10 != x && cant < 10 && cant < d  ) {
            cant ++;
            r += x; 
        }
        if (r % 10 == x) {
            yes = 1;
        }
        cout << (yes || p/10 >= x ? "YES" : "NO" ) << '\n';
        
    }
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
