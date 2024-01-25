#include <bits/stdc++.h>
using namespace std;

int n;
long long k, a[100009];

bool check(int i, int mid){
    if(a[mid] - a[i] <= k) return true;
    else return false;
}

int main() {
    cin >> n >> k;
    for(int i=1; i<=n; i++) cin >> a[i];
    long long ans = 0;
    for(int i=1; i<n; i++) {
        int l=i+1, r=n;
        while(l<r){
            int mid = (l + r + 1) / 2;
            if(check(i, mid)) l = mid;
            else r = mid - 1; 
        }
        if(check(i, l)) ans += l - i;
    }
    cout << ans;
}