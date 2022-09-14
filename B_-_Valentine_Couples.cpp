#include <bits/stdc++.h>
using namespace std;

void solve(){
    int s; cin >> s;
    vector <int> b(s);
    vector <int> g(s);
    vector <int> l(s);
    for(int i = 0; i < s; i++){
        cin >> b[i];
    }
    for(int i = 0; i < s; i++){
        cin >> g[i];
    }
    sort(b.begin(), b.end());
    sort(g.rbegin(), g.rend());
    for(int i = 0; i < s; i++){
        l[i] = g[i] + b[i];
    }
    sort(l.rbegin(), l.rend());
    cout << l[0] << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}