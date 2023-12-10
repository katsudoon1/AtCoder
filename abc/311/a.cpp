#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    bool flag_A = false;
    bool flag_B = false;
    bool flag_C = false;
    for(int i=0;i<n;i++){
        if(s[i] == 'A'){
            flag_A = true;
        }else if(s[i] == 'B'){
            flag_B = true;
        }else if(s[i] == 'C'){
            flag_C = true;
        }
        if(flag_A and flag_B and flag_C){
            cout << i+1 << endl;
            return 0;
        }
    }
}