#include <bits/stdc++.h>
using namespace std;

void solve(){
    string n, m; cin >> n >> m;
    cout << m[m.length() - 1] << "/";
    cout << n[n.length() - 1] << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}