#include <bits/stdc++.h>
using namespace std;

int main() {  
    int n;
    cin >> n;
    string ans;
    for(int i=0; i<n+3; i++){
        if(i == 0) ans += "L";
        else if(i == n+1) ans += "n";
        else if(i == n+2) ans += "g";
        else ans += "o";
    }
    cout << ans;  
}