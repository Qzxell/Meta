#include <bits/stdc++.h>
#define ln '\n' 
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;

int main() {
    string s,aa;
    cin >> s;
    aa = s;
    sort(s.begin(), s.end());
    cout << (aa == s ? "Yes":"No");
        return 0;
}
