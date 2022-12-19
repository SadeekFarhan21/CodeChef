#include <bits/stdc++.h>
using namespace std;

void solve(){
    map <char, int> m;
    int cost = 26 * (26 + 1) / 2;
    for(char i = 'a'; i <= 'z'; i++){
        int x; cin >> x;
        m.insert({i, x});
    }
    string x; cin >> x; sort(x.begin(), x.end());
    set <char> s(x.begin(), x.end());
    for(auto a : s){
        cost -= m[a];
    }
    cout << cost << "\n";
    
}

int main(){
    /*
    char a = 'a';
    a += 1;
    int x = (int) a - 96;
    cout << a << "\n";
    cout << x << "\n";
    */
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
}