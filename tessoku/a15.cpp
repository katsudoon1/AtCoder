#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a[100001], b[100001], c[100001], d[100001];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++) c[i] = a[i];
    sort(c+0, c+n);
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(i==0) {
            d[cnt] = c[i];
            cnt++;
        }
        else if(c[i] != c[i-1]){
            d[cnt] = c[i];
            cnt++;
        }
        else continue;
    }
    for(int i=0; i<n; i++){
        b[i] = lower_bound(d+0, d+cnt, a[i]) - d;
    }
    for(int i=0; i<n; i++){
        cout << b[i]+1 << " ";
    }
}