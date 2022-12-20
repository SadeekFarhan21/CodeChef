#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    int ans = 0;
    for(int i = 0; i < s.length(); i++){
        for(char a = '1'; a <= '9'; a++){
            if(s[i] == a){
                ans += int(a) - 48;
            }
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