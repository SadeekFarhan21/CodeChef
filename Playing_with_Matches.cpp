#include <bits/stdc++.h>
using namespace std;

void solve(){
    map <char, int> m = 
    {
        {'0', 6},
        {'1', 2},
        {'2', 5},
        {'3', 5},
        {'4', 4},
        {'5', 5},
        {'6', 6},
        {'7', 3},
        {'8', 7},
        {'9', 6}
    };
    int a, b; cin >> a >> b;
    int c = a + b;
    string s = to_string(c);
    int ans = 0;
    for(int i = 0; i < s.length(); i++){
        ans += m[s[i]];
    }
    cout << ans << "\n";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}