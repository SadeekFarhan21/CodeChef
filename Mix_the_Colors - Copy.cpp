#include <bits/stdc++.h>
using namespace std;

void solve(){
    int s; cin >> s;
    vector <int> v(s);
    for(int i = 0; i < s; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    set <int> c(v.begin(), v.end());
    cout << v.size() - c.size() << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}