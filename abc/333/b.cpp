#include <bits/stdc++.h>
using namespace std;

int henkan(char s){
    if(s == "A") return 0;
    if(s == "B") return 1;
    if(s == "C") return 2;
    if(s == "D") return 3;
    if(s == "E") return 4;
}

int main() {    
    char s1, s2, t1, t2;
    cin >> s1 >> s2 >> t1 >> t2;
    int ss1, ss2, tt1, tt2;
    ss1 = henkan(s1);
    ss2 = henkan(s2);
    tt1 = henkan(t1);
    tt2 = henkan(t2);
    int s_diff, t_diff;
    if(ss1 > ss2) {
        s_diff = ss1 - ss2;
    } else {
        s_diff = ss2 - ss1;
    }
    if(tt1 > tt2) {
        t_diff = tt1 - tt2;
    } else {
        t_diff = tt2 - tt1;
    }
    bool flag = false;
    if(s_diff == t_diff) flag = true;
    else if (s_diff + t_diff == 5) flag = true;
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}