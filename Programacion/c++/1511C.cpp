#include <bits/stdc++.h>
#define ln '\n' 
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    int n,q;
    cin >> n >> q;
    vi v(55,0);
    for (int i = 0; i < n; i++) {
        int x ;
        cin >> x;
        if (v[x]) {
            continue; 
        }else v[x] = i + 1;
    }
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        cout << v[x] << ' ';
        for (int j = 1; j < 55; j++) {
            if (v[j] < v[x] ) {
                v[j]++; 
            }
        }
        v[x] = 1;
    }

    return 0;
}
