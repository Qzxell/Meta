#include <bits/stdc++.h>
#define ln '\n' 
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;

int main() {
    string s;
    cin >> s;
    vector<int>v(28,0);
    for (int i = 0; i < s.size(); i++) {
        v[s[i] - 'a']++;
    }
    int ans = 0;
    char anss;
    for (int i = 0; i < 28; i++) {
        if (v[i] > ans ) {
            anss = i + 'a'; 
            ans = v[i];
        } 
    }
    cout << anss ;
    return 0;
}
