#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s, k;
    cin >> n >> s >> k;
    int p[101], q[101];
    for(int i = 1; i <= n; i++) {
        cin >> p[i] >> q[i];
    }
    int shohin = 0;
    for(int i = 1; i <= n; i++) {
        shohin += p[i]*q[i];
    }
    if(shohin < s) cout << shohin + k << endl;
    else cout << shohin  << endl;
}   
