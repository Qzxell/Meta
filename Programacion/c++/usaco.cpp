#include <bits/stdc++.h>
#define ln '\n' 
using namespace std;

typedef pair<int, int> ii;

typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;

int main() {
    int n,x;
    cin >> n>> x;
    vector<int>v(n);
    for(int i = 0; i< n ; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int a = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        a+= v[i]; 
        if (a > x) {
            break;
        }
        ans++;
    }
    cout << ans;

    return 0;
}
