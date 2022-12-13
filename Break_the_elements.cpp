#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int even = 0;
    for(int i = 0; i < n; i++){
        if(v[i] % 2 == 0){
            even += 1;
        }
    }
    if(even == n || even == 0){
        cout << 0 << "\n";
    }
    else {
        cout << even << "\n";
    }
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}