#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    set <int> s(v.begin(), v.end());
    if (v.size() == 2 && s.size() == 2){
        cout << 1 << "\n";
    }
    else if(s.size() == v.size()){
        cout << v.size() << "\n";
    }
    else {
        cout << s.size() - 1 << "\n";
    }
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}