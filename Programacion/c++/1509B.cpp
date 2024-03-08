#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define pb push_back
#define ln '\n' 

using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int t =0,m =0;
    int mm=0,tt=0;
    if (n % 3 != 0) {
        cout << "NO" << ln;
        return; 
    }
    bool ans = 1;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'M') {
            m++;      
        }else {
            if (m > t) {
                cout << "NO" << ln;
                return;
            }
            t -= m ;
            m = 0;
            t++;
        }
    }
    m=0,t=0;
    for (int i = n-1; i >=0; i--) {
        if (s[i] == 'M') {
            m++;      
            mm++;
        }else {
            if (m > t) {
                cout << "NO" << ln;
                return;
            }
            t -= m ;
            m = 0;
            t++;
            tt++;
        }
    }
    if (2*mm != tt) {
        cout << "NO" << ln; 
    }else cout << "YES" << ln;
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
