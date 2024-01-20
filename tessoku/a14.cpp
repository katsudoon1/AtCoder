#include <bits/stdc++.h>
using namespace std;

int n;
long long k, a[1009], b[1009], c[1009], d[1009], r[1000009], s[1000009];

int main() {
    cin >> n >> k;
    for(int i=1; i<=n; i++) cin >> a[i];
    for(int i=1; i<=n; i++) cin >> b[i];
    for(int i=1; i<=n; i++) cin >> c[i];
    for(int i=1; i<=n; i++) cin >> d[i];
    int index = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            index++;
            r[index] = a[i] + b[j];
        }
    }
    index = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            index++;
            s[index] = c[i] + d[j];
        }
    }
    bool flag = false;
    sort(r+1, r+index+1);
    for(int i=1; i<=index; i++){
        long long sagasu = k - s[i];
        int temp = lower_bound(r+1, r+index+1, sagasu) - r;
        if(r[temp] == sagasu) flag = true;
    }
    if(flag) cout << "Yes";
    else cout << "No";
}
