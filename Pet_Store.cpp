#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector <int> v(n);
    map <int, int> m;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        m[v[i]]++;
    }
    for(auto x : m){
        if(x.second % 2 != 0){
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
    return;
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
}