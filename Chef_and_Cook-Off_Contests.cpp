#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    set <string> S;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        if(S.find("cakewalk") == S.end() && s == "cakewalk") {
            S.insert(s);
        }
        else if(S.find("simple") == S.end() && s == "simple") {
            S.insert(s);
        }
        else if(S.find("easy") == S.end() && s == "easy"){
            S.insert(s);
        }
        else if(S.find("easy-medium") == S.end() && S.find("medium") == S.end() && (s == "easy-medium" || s == "medium")){
            S.insert(s);
        }
        else if(S.find("medium-hard") == S.end() && S.find("hard") == S.end() && (s == "medium-hard" || s == "hard")){
            S.insert(s);
        }
    }
    if(S.size() == 5) cout << "Yes" << "\n";
    else cout << "No" << "\n";
    // cout << S.size() << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
}