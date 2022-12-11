#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x, c; cin >> n >> x >> c;
    int cost = 0;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        if(x - v[i] > c and v[i] < x){
            v[i] = x;
            cost += c;
        }
    }
    cout << accumulate(v.begin(), v.end(), 0) - cost << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
}