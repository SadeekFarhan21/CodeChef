#include <bits/stdc++.h>
using namespace std;

void solve(){
    int s; cin >> s;
    vector <int> f;
    multiset <int> v;
    for(int i = 0; i < s; i++){
        int a; cin >> a;
        v.insert(a);
    }
    set <int> x(v.begin(), v.end());
    for(auto c : x){
        int count = v.count(c);
        if(count >= 2){
            f.push_back(c);
        }
    }
    if(f.size() <= 1){
        cout << -1 << "\n"; 
        return ;
    }
    sort(f.rbegin(), f.rend());
    cout << f[1] * f[0] << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}