#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    int ans = 0;
    for (int i = 1; i<=n;i++){
        int a;
        cin >> a;
        if(a>=l){
            ans++;
        }
    }
    cout << ans;
}
