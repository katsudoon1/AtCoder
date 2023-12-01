#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool flag = true;
    for(int i=0;i<8;i++){
        int k;
        k = 1 + 2*i;
        if(s[k] != '0'){
            flag = false;
        }
    }
    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}