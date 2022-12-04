#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    for(int i = 0; i < n; i++){
        
    }
    map <int, int> m;
    for(int i = 0; i < n; i++){
        if(m.find(v[i]) != m.end()){        
            m.insert(make_pair(v[i], i));
        }
        else {
            m[v[i]]++;
        }
    }

    // int most_frequent = -1;
    
    int frequency = 0;
    int most_frequent = INT_MAX;
    for(auto x : m){
        if(x.second > frequency){
            most_frequent = x.first;
            frequency = x.second;
        }

        // cout << x.first << " " << x.second << "\n";
    }
    // frequency = v.
    cout << v.size() - frequency << "\n";

}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
}