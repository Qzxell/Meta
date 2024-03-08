#include <iostream>
#define MOD 1000000007

using namespace std;

typedef long long ll;

ll fastPow(ll base, ll exp, ll mod) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

void resolver() {
    ll n;
    cin >> n;
    ll k = (1LL << n) - 2;
    ll ans = 6;
    ans = (ans * fastPow(4, k, MOD)) % MOD;
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    resolver();

    return 0;
}
