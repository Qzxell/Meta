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
    ll n;
    cin >> n;
    if (n > 0) {
        cout << (n+9)/10; 
    }else {
        n *= -1;
        cout << -1*(n/10);
    }

    return 0;
}
