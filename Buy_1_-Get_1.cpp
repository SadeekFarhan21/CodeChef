#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    unordered_map <char, int> m;
    for(int i = 0; i < s.length(); i++){
        if(m.count(s[i]) == 0){
            m.insert({s[i], 1});
        }
        else {
            m[s[i]]++;
        }
    }
    int cost = 0;
    for(auto i : m){
        if(i.second % 2 == 0){
            cost += (i.second) / 2;
        }
        else {
            cost += (i.second) / 2 + 1;
        }
    }
    cout << cost << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
}