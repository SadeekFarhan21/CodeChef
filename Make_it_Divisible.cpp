#include <bits/stdc++.h>
using namespace std;

void solve(){
    int l; cin >> l;
    if(l == 1){
        cout << '3';
    }
    else {
        cout << '2';
        for(int i = 0; i < l - 2; i++){
            cout << '0';
        }
        cout << '1';
    }
    cout << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}