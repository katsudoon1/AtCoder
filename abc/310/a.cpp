#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p, q;
    cin >> n >> p >> q;
    int minD;
    cin >> minD;
    for(int i = 1; i < n; i++) {
        int d;
        cin >> d;
        minD = min(minD, d);
    }
    int ans = min(p, minD+q);
    cout << ans << endl;
}