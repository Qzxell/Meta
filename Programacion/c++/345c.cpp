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
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    s += '-';
    ll c = 0;
    ll cc =0;
    ll r = s.size() -1;
    bool y = 0;
    for (int i = 0; i < (int)s.size() - 1; i++) {
        if (s[i] == s[i + 1]) {
            cc ++; 
        }
        if (s[i] != s[i+1]) {
            if (cc + 1> 1) {
                y = 1; 
            }
            c += (cc * (cc+1))/2; 
            cc=0; 

        } 
    }

    ll ans = (r *(r-1)) /2  - c;
    if (y) {
        ans ++; 
    }
    cout << ans ;


    return 0;
}
