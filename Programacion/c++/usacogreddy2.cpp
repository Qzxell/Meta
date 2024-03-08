#include <bits/stdc++.h>
#define ln '\n' 
using namespace std;

typedef pair<int, int> ii;

typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;

int main() {
    int n;
    string a,b;
    cin >> n >> a >> b;
    a+='y';
    b+='y';
    bool yes = 0;
    int ans = 0;
    for (int i = 0; i < n+1; i++) {
        if (a[i] != b[i] ) {
            yes = 1;
        }else if(yes){
            ans++;
            yes = 0;
        }
    }
    cout << ans ;
    return 0;
}
