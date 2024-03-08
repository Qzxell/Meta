#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define ln '\n' 

using namespace std;

typedef long long ll;
typedef long double ld;

ll msqrt(ll x){
    ll l=1,r=1e9;
    while(l<r){
        ll m=(l+r+1)/2;
        if(m*m<=x) l=m;
        else r=m-1;
    }
    return l;
}
void solve() {
    ll a,b;
    cin >> a>> b;
    ll m,n;
    m = msqrt(a);
    n = msqrt(b);
    ll ans = 0;
    ans += (n-m)*3;
    ans -= (a-1)/m - (m-1);
    ans +=  b/n - (n-1) ;
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
