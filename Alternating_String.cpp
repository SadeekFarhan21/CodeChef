#include <bits/stdc++.h>
using namespace std;

void solve(){
    int l; cin >> l;
    string s; cin >> s;
    int o = count(s.begin(), s.end(), '1');
    int z = count(s.begin(), s.end(), '0');
    int ans = min(o, z) * 2 + 1;
    if(l < ans) ans = l;
    cout << ans << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}