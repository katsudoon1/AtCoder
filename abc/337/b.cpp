#include <bits/stdc++.h>
using namespace std;

int main() {    
    string s;
    cin >> s;
    int n = s.size();
    bool flag = true;
    for (int i = 1; i < n; i++) {
        if (s[i-1] == 'B') {
            if (s[i] == 'A') flag = false;
        }
        if (s[i-1] == 'C') {
            if (s[i] == 'B') flag = false;
            if (s[i] == 'A') flag = false;
        }
    }
    if(flag) cout << "Yes";
    else cout << "No";
}
