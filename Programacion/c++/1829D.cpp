#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define ln '\n' 

using namespace std;

typedef long long ll;
typedef long double ld;

bool solve() {
    int m,n;
    cin >> m>> n;
    if (n > n) {
        return false; 
    }
    int c=0;
    while (m%3==0) {
        m/=3; 
        c++;
    }
    for (int i = 0; i <= c; i++) {
        for (int j = 0; j <= c - i; j++) {
            int uu = m;
            for (int l = 0; l < i; l++) {
               uu *= 2;  
            } 
            for (int l = 0; l < j; l++) {
               uu *= 3;  
            } 
            if (uu == n) {
               return true; 
            }
        }
    }
    return false; 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--){
        cout << (solve() ? "YES" : "NO") << ln; 
    }
    return 0;
}
