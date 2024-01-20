#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[70];
    for(int i=0; i<64; i++){
        cin >> a[i];
    }
    long long ans = 0;
    for(int i=0; i<64; i++){
        ans += a[i] * (1ull << i);
    }
    cout << ans;
}