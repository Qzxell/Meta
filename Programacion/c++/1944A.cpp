#include<bits/stdc++.h>
using namespace std;

void solv(){
    int n ,k;
    cin >> n >> k;
    if (k >= n -1) {
        cout << 1 << '\n';
    }else {
        cout << n << '\n';
    }

}
int main(){
    int t;
    cin >> t;
    while(t--){
        solv();
    }
    return 0;
}
