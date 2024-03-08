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
    map <int,int> m;
    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        m[t] = i;
    }
    bool tr = 1;
    int f = -1;
    for (int i = 0; i < n; i++) {
        cout << m[f] << ' ';
        f= m[f];
    }
    return 0;
}
