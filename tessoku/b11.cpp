#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, q;
    long long a[100009], x[100009];
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }    
    sort(a+1, a+n+1);

    cin >> q;
    for(int i = 1; i<=q; i++) cin >> x[i];
    for(int i = 1; i <= q; i++) {
        int temp = lower_bound(a+1, a+n+1, x[i]) - a;
        int ans = temp - 1;
        cout << ans << endl;
    }
}
