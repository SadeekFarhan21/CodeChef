#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    int s = n * m;
    vector <int> v(n);
    for(int i = 0; i < n - 1; i++){
        v[i] = i + 1;
    }
    v[n - 1] = s - accumulate(v.begin(), v.begin() + n - 1, 0);
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}