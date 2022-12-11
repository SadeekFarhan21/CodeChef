#include <bits/stdc++.h>
using namespace std;

void solve(){
    string a; cin >> a;
    for(int i = 0; i < a.length() - 1; i++){
        if((a[i] == '0' && a[i + 1] == '1' && a[i + 2] == '0') || (a[i] == '1' && a[i + 1] == '0' && a[i + 2] == '1')){
            cout << "Good\n"; 
            return;
        }
    }
    cout << "Bad\n";
    return;
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}