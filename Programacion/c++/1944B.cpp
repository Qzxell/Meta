#include<bits/stdc++.h>
using namespace std;

void solv(){
    int n ,k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i]; 
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i]; 
    }
    vector<int> ansa;
    vector<int> ansb;
    vector<bool> va(n+1,0);
    vector<bool> vb(n+1,0);
    for (int i = 0; i < n; ++i) {
        va[a[i]] = 1;     
        vb[b[i]] = 1;
    }
    int c = 0;
    for (int i = 0; i < n +1; ++i) {
        if (va[i] && vb[i] && c < 2*k ) {
            ansa.push_back(i); 
            ansb.push_back(i); 
            c++;
        } 
    }
    if (c&1) {
        ansa.pop_back(); 
        ansb.pop_back(); 
    }
    if (2*k - c) {
        for (int i = 0; i < n + 1; ++i) {
            if (va[i] && !vb[i] && (int)ansa.size() < 2*k - 1) {
                ansa.push_back(i); 
                ansa.push_back(i); 
            } 
            if (vb[i] && !va[i] && (int)ansb.size() < 2*k - 1) {
                ansb.push_back(i); 
                ansb.push_back(i); 
            } 
        } 
    }
    for (int i = 0; i < ansa.size(); ++i) {
        cout << ansa[i] << ' '; 
    }
    cout << '\n';
    for (int i = 0; i < ansa.size(); ++i) {
        cout << ansb[i] << ' '; 
    }
    cout << '\n';

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
