#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    vector <char> v;
    for(int i = 0; i < n; i++){
        if(s[i] == 'H' or s[i] == 'T'){
            char c = s[i];
            v.push_back(c);
        }
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    
    /*
    if (v.size() == 0) {
        cout << "Valid" << "\n";
        return;
    }

    bool isValid = true;
    for(int i = 0; i < v.size(); i += 2){
        if(v[i] != 'H' || v[i + 1] != 'T'){
            isValid = false;
        }
    }
    if(isValid) cout << "Valid" << "\n";
    else cout << "Invalid" << "\n";
    */
}

int main(){
    int t; cin >> t;
    solve();
}