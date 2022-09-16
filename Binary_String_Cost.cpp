#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x, y, ans = 0; cin >> n >> x >> y;
    string s; cin >> s;
    if(x < y){
        sort(s.rbegin(), s.rend());
    }
    else {
        sort(s.begin(), s.end());
    }
    for(int i = 0; i < s.length() - 1; i++){
        if(s[i] == '1' && s[i + 1] == '0'){
            ans += x;
        }
        if(s[i] == '0' && s[i + 1] == '1'){
            ans += y;
        }
    }
    cout << ans << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}