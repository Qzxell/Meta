#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))

using namespace std;

typedef long long ll;
typedef long double ld;

void solve() {
    int n ,s;
	cin >> n >> s;
    vector<ll> v(n);
    vector<ll> ps(n+1,0);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
    for (int i = 1; i <= n; i++) {
        ps[i] = ps[i-1] + v[i-1];
    }
    if (ps[n] <= s) {
        cout << 0 << '\n';
        return;
    }
    int ans = 0;
    int ii = 0;
    int j = upper_bound(ps.begin(), ps.end(), s ) - ps.begin();
    for (int i = 0; i < j; i++) {
        if (v[i] > ans) {
            ans = v[i];
            ii = i+1;
        }
    }
    cout << ii << '\n';
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
