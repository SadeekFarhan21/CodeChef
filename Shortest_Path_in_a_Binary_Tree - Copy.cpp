#include <bits/stdc++.h>
using namespace std;

void solve(){
    int i, j; cin >> i >> j;
    int a = 0;
    while(true){
        if(pow(2, a) > j){
            cout << a << "\n";
            return;
        }
        a += 1;
    }
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}