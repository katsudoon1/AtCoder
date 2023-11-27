#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int k;
    cin >> n >> k;
    ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j =1; j<=n; j++){
            for (int l =1; l<=n; l++){
                if (i+j+l==k){
                    ans++;
                }
            }
        }
    }
    cout << ans;
}
