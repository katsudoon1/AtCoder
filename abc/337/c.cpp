#include <bits/stdc++.h>
using namespace std;

int main() {    
    int n, a[300003], b[300003];
    cin >> n;
    int sentou;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i]==-1) {
            sentou = i;
        }
    }
    for (int i = 1; i <= n; i++) {
        if(i == sentou) continue;
        else b[a[i]] = i;
    }
    cout << sentou << " ";
    int temp = sentou;
    for(int i=0; i<n-1; i++){
        cout << b[temp] << " ";
        if(i == n-2) break;
        temp = b[temp];
    }
}