#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector <int> v(n + 1);
    map <int, int> m;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] != (i + 1)){
            if(m.find(v[i]) == m.end()){
                m.insert({v[i], 1});
            }
            else {
                m[v[i]]++;
            }
        }
    }
    
    int answer = 0;
    for(auto i : m){
        if(i.second >= k){
            answer++;
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