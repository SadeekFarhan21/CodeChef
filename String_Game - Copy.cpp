#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    bool is = true;
    if(n % 2 != 0) is = false;
    sort(s.begin(), s.end()); 
    for(int i = 0; i < n; i += 2){
        if(s[i] != s[i + 1]){
            is = false;
            break;
        }
    }
    if(is) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
}