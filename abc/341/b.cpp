#include <bits/stdc++.h>
using namespace std;

int main() {    
    int n;
    long long a[1000000], s[1000000], t[1000000];
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n-1;i++){
        cin >> s[i] >> t[i];
    }
    for(int i=1;i<=n-1;i++){
        long long plus;
        plus = (a[i] / s[i])*t[i];
        a[i+1]+=plus;
    }
    cout << a[n];
}