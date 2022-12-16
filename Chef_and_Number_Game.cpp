#include <bits/stdc++.h>
using namespace std;

void solve(){
    int c, x; cin >> c;
    vector <int> p, n;
    for(int i = 0; i < c; i++){
        cin >> x;
        if(x < 0) {
            n.push_back(x);
        }
        else { 
            p.push_back(x);
        }
    }
    int pSum = abs(accumulate(p.begin(), p.end(), 0));
    int nSum = abs(accumulate(n.begin(), n.end(), 0));
    if(pSum == nSum) cout << max(p.size(), n.size()) << " " << min(p.size(), n.size()) << "\n";
    else if(pSum > nSum){
        cout << p.size() << " " << p.size() << "\n";
    }
    else {
        cout << n.size() << " " << n.size() << "\n";
    }
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
}