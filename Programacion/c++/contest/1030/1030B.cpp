#include <bits/stdc++.h>
#define ln '\n' 
#define fi first
#define se second
using namespace std;


typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;

int main() {
    int d,n,k;
    cin >> n >> d >> k;
    pair<int,int>uno,dos,tre,cu;
    uno = {-d,d};
    dos = {d,d};
    tre ={d,2*n-d};
    cu = {-d,2*n-d};
    for (int i = 0; i < k; i++) {
        int a,b;
        cin >> a >> b;
        pair<int,int>k;
        k = {a-b,a+b};
        bool ans = 0;
        if (k.fi >= uno.fi && k.fi <= dos.fi && k.se >= uno.se && k.se <= cu.se) {
            ans = 1; 
        }
        cout << (!ans ? "NO" : "YES") << ln;
    }

    return 0;
}
