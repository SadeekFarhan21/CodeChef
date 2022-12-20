#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int answer = 0;
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        if(i + 1 < v[i]){
            cout << -1 << "\n";
            return;
        }
        else {
            answer += (i + 1 - v[i]);
        }
    }
    cout << answer << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
}