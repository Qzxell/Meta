#include <bits/stdc++.h>
#define ln '\n' 
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vi a(n),b(n),q(n);
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }
    int lo = 1e9;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) {
            continue; 
        }
        lo = min(q[i]/a[i],lo);
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int ans = 0;
    for (int i = 0; i <= lo; i++) {
        int m = 1e9;
        for (int j = 0; j < n; j++) {
            int y =q[j] - a[j]*i;    
            if (b[j] == 0) {
               continue; 
            }
            m = min(m, y/b[j] );
        }
        ans = max(ans, m + i);
    }
    cout << ans;
    return 0;
}
