#include <bits/stdc++.h>
#define ln '\n' 
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;

int main() {
    int n,q;
    string s;
    cin >> n >> q >> s;
    vector<bool> pos(100003,0);
    int i = 0;
    int ans = 0;
    while (i < n - 2) {
        if (s[i] == 'a' && s[i+1] == 'b' && s[i+2] == 'c') {
            pos[i] = 1;
            pos[i+1] = 1;
            pos[i+2]= 1;
            i+=2;
            ans++;
        } 
        i++;
    }
    int k; char o;
    for (int i = 0; i < q; i++) {
        cin >>k >> o; 
        int y = s[k-1] - 'a';
        int x = o - 'a';
        if (k-1-y >= 0 && s[k-1] != o && pos[k-1]) {
            ans--;
            pos[k-1-y] = 0; 
            pos[k-y] = 0; 
            pos[k-y+1] = 0; 
        }
        s[k-1] = o;
        if (k-1-x >= 0&& k-x+1 < n && !pos[k-1-x] && s[k-1-x] == 'a' && s[k-x] == 'b' && s[k-x+1] == 'c' ) {
            ans++;
            pos[k-1-x] = 1; 
            pos[k-x] = 1; 
            pos[k-x+1] = 1; 
             
        }
        cout << ans << ln;
        
    }
    return 0;
}
