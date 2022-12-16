#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    set <string> v;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        if(v.find(s) == v.end()){
            v.insert(s);
            cout << "OK" << "\n";
        }
        else {
            int a = 1;
            while(true){
                s += to_string(a);
                if(v.find(s) == v.end()){
                    v.insert(s);
                    a = 1;
                    break;
                }
                else {
                    s.erase(s.length() - to_string(a).length());
                    a++;
                }
            }
            cout << s << "\n";
        }
    }
}