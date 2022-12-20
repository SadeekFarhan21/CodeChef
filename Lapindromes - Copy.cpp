#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s, a, b, c; cin >> s;
    int n = s.length();
    if(n % 2 != 0){
        n -= 1;
        int l = n / 2;
        a = s.substr(0, l);
        b = s.substr(l + 1, n);    
    }
    else {
        int l = n / 2;
        a = s.substr(0, l);
        b = s.substr(l, n);
    }
    c = b;
    reverse(c.begin(), c.end());
    if(a == b || a == c){
        cout << "YES\n";
    }    
    else {
        cout << "NO\n";
    }
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}