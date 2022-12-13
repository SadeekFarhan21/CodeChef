#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k, v; cin >> n >> k >> v;
    vector <int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int rem = v * (n + k) - accumulate(a.begin(), a.end(), 0);
    if((rem % k != 0) || (rem / k) < 1){
        cout << -1 << "\n"; return;
    }
    else {
        cout << rem / k << "\n";
    }
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
}