#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector <int> a(n), b(n), v(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    for(int i = 0; i < n; i++){
        v[i] = a[i] * 20 - b[i] * 10;
    }
    sort(v.rbegin(), v.rend());
    if(v[0] < 0) v[0] = 0;
    cout << v[0] << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
}