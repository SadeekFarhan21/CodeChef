#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int total = 0;
    for(int i = 0; i <= n; i += 2){
        total += (n - i) * (n - i);
    }
    cout << total << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}