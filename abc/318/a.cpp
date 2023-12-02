#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, p;
    cin >> n >> m >> p;
    int ans = 0;
    n= n-m;
    while(n>=0) {
        ans++;
        n = n-p;
    }
    cout << ans << endl;   
}