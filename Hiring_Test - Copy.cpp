#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n; // candidates
    int p; cin >> p; // problems
    int full; cin >> full; // full
    int partial; cin >> partial; // partial
    vector <string> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        int f = count(v[i].begin(), v[i].end(), 'F');
        int p = count(v[i].begin(), v[i].end(), 'P');
        int u = count(v[i].begin(), v[i].end(), 'U');
        cout << f << p;
        /*
        if(f >= full){
            cout << 1;
        }
        else if(f < full){
            if((f == (full - 1)) && p >= partial){
                cout << 1;
            }
        }
        else {
            cout << 0;
        }
        */
    }
    cout << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}