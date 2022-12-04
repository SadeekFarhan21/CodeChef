#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '4'){
            count++;
        }
    }
    cout << count << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}