#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector <int> answer;
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        answer.push_back(v[i]);
        answer.push_back(v[v.size() - 1]);
        v.pop_back();
    }
    for(int i = 0; i < n; i++){
        cout << answer[i] << " ";
    }
    cout << "\n"; return;
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
}