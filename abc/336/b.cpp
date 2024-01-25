#include <bits/stdc++.h>
using namespace std;

int main() {    
    int n;
    cin >> n;
    int a[33];
    for(int i=0; i<33; i++){
        int wari = 1 << i;
        a[i] = (n/wari) % 2;
    }
    int ans=0;
    for(int i=0; i<33; i++){
        if(a[i]==0) ans++;
        else break;
    }
    cout << ans;
}