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
    string s;
    cin >> n >> s;
    bool g = 1;
    for (int i = 0; i < sz(s)/2; i++) {
        if (s[i] < s[sz(s) - i- 1]) {
            g = 1; 
            break;
        }else if (s[i] > s[sz(s) - i -1]) {
            g= 0;
            break;
        } 
    }
    if (g) {
        cout << s << ln; 
    }else {
        for (int i = sz(s)-1; i >= 0; i--) {
            cout << s[i]; 
        }
        cout << s ; 
        cout << ln;
    }
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
