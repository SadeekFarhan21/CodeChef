#include <bits/stdc++.h>
using namespace std;

void solve(){
    int m, n; cin >> m >> n;
    bool isInvalid = false, isWeak = false;
    vector <pair <string, string>> v;
    for(int i = 0; i < m; i++){
        string a, b; cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    for(auto i : v){
        int one  = count(i.second.begin(), i.second.end(), '1');
        int zero = count(i.second.begin(), i.second.end(), '0');    
        // cout << "one " << one << " zero " << zero << "\n";
        if(i.first == "correct"){
            if(one != i.second.length()){
                isInvalid = true;
            }
        }
        else if(i.first == "wrong"){
            if(one == i.second.length()){
                isWeak = true;
            }
        }
    }
    if(isInvalid){
        cout << "INVALID" << "\n";
        return;
    }
    else if(isWeak){
        cout << "WEAK" << "\n";
        return;
    }
    else {
        cout << "FINE" << "\n";
    }
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
}