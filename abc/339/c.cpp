#include <bits/stdc++.h>
using namespace std;

int main() {    
    long long n, a[1000000];
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    long long t=0;
    long long saishou = 1000000001;
    for(int i=0;i<n;i++){
        t = t + a[i];
        saishou = min(saishou, t);
    }
    saishou = min(0LL, saishou);
    int ans;
    ans = -saishou;
    for(int i=0;i<n;i++){
        ans = ans + a[i];
    }
    cout << ans;
}