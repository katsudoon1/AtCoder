#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(s[i]=='a' && s[i+1]=='b'){
            flag = true;
        }
        if(s[i]=='b' && s[i+1]=='a'){
            flag = true;
        }
    }
    string ans;
    if(flag){
        ans = "Yes";
    }
    else{
        ans = "No";
    }
    cout << ans;
}
