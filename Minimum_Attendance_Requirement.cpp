#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string b; cin >> b;
    if(count(b.begin(), b.end(), '0') > 30){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    return;
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
}