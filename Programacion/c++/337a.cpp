#include <bits/stdc++.h>
#define ln '\n' 
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    int r,a;
    r = a = 0;
    int p,t;
    for (int i = 0; i < n; i++) {
        cin >> p >> t; 
        r+= p;
        a+= t;
    }
    if (r>a) {
        cout << "Takahashi";
    }else if (r < a) {
        cout << "Aoki"; 
    }else cout << "Draw";
    return 0;
}
