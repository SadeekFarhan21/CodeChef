#include <bits/stdc++.h>
using namespace std;

int checkIfPangram(string sentence){
    sort(sentence.begin(), sentence.end());
    unique(sentence.begin(), sentence.end());
    return sentence.length();
}

int main(){
    string a; cin >> a;
    int value = checkIfPangram("Farhan");
    cout << value << "\n";
}