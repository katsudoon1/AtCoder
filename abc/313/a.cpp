#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans, p[101];
    cin >> n;
    cin >> p[0];
    ans = 0;
    for(int i = 1; i < n; i++) {
        cin >> p[i];
        if(p[0]+ans<=p[i]) {
            ans = p[i]-p[0]+1;
        }
    }
    cout << ans;
}