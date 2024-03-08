#include <bits/stdc++.h>
#define ln '\n' 
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;

int main() {
    int n,m,x,y;
    cin >> n >> m >> x >> y;
    x--;
    y--;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << x +1 << ' '<<(y+j)%m + 1<<ln;
            if (j == m-1) {
                x++;
                x%=n;
                y = (y+j)%m;
            }
        }
        
        
    }
    return 0;
}
