#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, ans; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    if(n == 7){
        cout << n << "\n";
        return;
    }
    for(int i = 7; i < n; i++){
        sort(v.begin(), v.begin() + i);
        for(int j = 0; j < 7; j++){
            if(v[j] == j + 1){
                ans = i;
            }
            else {
                i += 1;
                ans = i;
                break;
            }
        }
    }
    cout << ans << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}