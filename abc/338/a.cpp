#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    bool flag = true;
    if(islower(s[0])){
        flag = false;
    }
    for(int i=1;i<n;i++){
        if(isupper(s[i])){
            flag = false;
        }
    }
    if(flag) cout << "Yes";
    else cout << "No";
}