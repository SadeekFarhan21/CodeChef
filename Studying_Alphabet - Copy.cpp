#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, t; cin >> a;
    sort(a.begin(), a.end());
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t;
        sort(t.begin(), t.end());
        set <char> x(t.begin(), t.end());
        string s = string(x.begin(), x.end());
        sort(s.begin(), s.end());
        if(a == s){
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }
    return 0;
}