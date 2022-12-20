#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n, sum = 0; cin >> n;
    vector <long long> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }
    sum /= (n + 1);
    for(int i = 0; i < n; i++){
        cout << v[i] - sum << " ";
    }
    cout << "\n"; return;

}

int main(){
    long long t; cin >> t;
    for(long long i = 0; i < t; i++){
        solve();
    }
    return 0;
}