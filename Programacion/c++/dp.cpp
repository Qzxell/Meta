#include <bits/stdc++.h>
#define ln '\n' 
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;

int bag( vector<int>pes , vector<int>values, int w, int n){
    if (w == 0 || n == 0) {
       return 0; 
    }
    if (pes[n] <= w) {
        return max(values[n] + bag(pes,values,w-pes[n],n-1), bag(pes,values,w,n-1)); 
    }else 
        return bag(pes,values,w,n-1);
}
int main() {
    int n,w;
    cin >> n >> w;
    vi pes(n),values(n);
    for (int i = 0; i < n; i++) {
        cin >> pes[i]; 
    }
    for (int i = 0; i < n; i++) {
        cin >> values[i]; 
    }
    cout << bag(pes,values,w,n-1);
    return 0;
}
