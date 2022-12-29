#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector <int> a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    int ans = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] >= 1 && b[i] >= 1){
            count++;
        }
        else {
            count = 0;
        }
        ans = max(ans, count);
    }
    cout << ans << "\n";

}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
}