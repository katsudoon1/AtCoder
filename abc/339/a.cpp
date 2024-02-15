#include <bits/stdc++.h>
using namespace std;

int main() {    
    string s;
    cin >> s;
    int n = s.size();
    vector<char> t(0);
    for(int i=n-1; i>=0; i--){
        if(s[i] == '.') break;
        t.push_back(s[i]);
    }
    // tの中身を逆順にする
    reverse(t.begin(), t.end());
    for(int i=0; i<t.size(); i++){
        cout << t[i];
    }
}