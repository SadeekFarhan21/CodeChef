#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    if(s.length() < 5){
        // do nothing
    } 
    else {
        for(int i = 0; i < s.length() - 4; i++){
            if(s[i] == 'p' && s[i + 1] == 'a' && s[i + 2] == 'r' && s[i + 3] == 't' && s[i + 4] == 'y'){
                s[i + 0] = 'p';
                s[i + 1] = 'a';
                s[i + 2] = 'w';
                s[i + 3] = 'r';
                s[i + 4] = 'i';
            }
        }
    }
    cout << s << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
}