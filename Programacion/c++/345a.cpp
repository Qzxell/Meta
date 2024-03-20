#include <bits/stdc++.h>

#define ln '\n'
using namespace std;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    if (s[0] != '<') {
        cout << "No" << ln;
        return 0;
    }
    if (s[(int)s.size() - 1] != '>') {
        cout << "No" << ln;
        return 0;
    }
    for (int i = 1; i < (int)s.size()-1; i++) {
        if (s[i] != '=') {
            cout << "No" << ln;
            return 0;
        } 
    }
    cout << "Yes" << ln;

    return 0;
}
