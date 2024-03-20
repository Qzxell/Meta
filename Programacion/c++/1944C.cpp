#include<bits/stdc++.h>
using namespace std;

void solv(){
    int n;
    cin >> n;
    vector<int > v(n+2,0);
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        v[t] ++;
    }
    int mex = 0;
    for (int i = 0; i < n+1; ++i) {
        if (v[i] < 1) {
            break; 
        } 
        mex ++;
        v[i+1] --;
    }
    cout << mex << '\n';
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solv();
    }
    return 0;
}
