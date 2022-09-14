#include <bits/stdc++.h>
using namespace std;

void solve(){
    string a, b; cin >> a >> b;
    bool isMatching = true;
    for(int i = 0; i < a.length(); i++){
        if((a[i] == b[i]) || a[i] == '?' || b[i] == '?'){
            
        }
        else {
            isMatching = false;
            break;
        }
    }
    if(isMatching == true) cout << "Yes" << "\n";
    else cout << "No" << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
}