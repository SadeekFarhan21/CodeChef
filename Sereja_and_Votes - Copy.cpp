#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int s = accumulate(v.begin(), v.end(), 0);
    if(s == 100){
        cout << "YES" << "\n";
    }
    else {
        s -= (n - 1);
        if(s == 100){
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
}