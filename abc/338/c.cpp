#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q[13], a[13], b[13];
    cin >> n;
    for(int i=0;i<n;i++) cin >> q[i];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    int ans = 0;
    for(int i=0;i<1000001;i++){
        int add = 10000000;
        bool flag = false;
        for(int j=0;j<n;j++){
            int temp = q[j] - a[j]*i;
            if(temp < 0) flag = true;
            if(flag) break;
            if(b[j] == 0) continue;
            temp = temp / b[j];
            add = min(add, temp);
        }
        if(flag) break;
        int temp2 = i + add;
        ans = max(ans, temp2);
    }
    cout << ans;
}