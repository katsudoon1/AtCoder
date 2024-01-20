#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long a[100009], x;
    cin >> n >> x;
    for(int i=1; i<n+1; i++){
        cin >> a[i];
    }
    int ans = lower_bound(a+1, a+n+1, x) - a;
    cout << ans;
}