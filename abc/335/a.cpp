#include <bits/stdc++.h>
using namespace std;

int main() {    
    string s;
    cin >> s;
    int n = s.size();
    string ans = "";
    for(int i = 0; i<n; i++){
        if(i==n-1) ans += "4";
        else ans += s[i];
    }
    cout << ans;
}