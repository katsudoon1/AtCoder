#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    int s[10];
    int ans = 0;
    cin >> n >> x;
    for(int i=0;i<n;i++){
        cin >> s[i];
        if(s[i]<=x){
            ans += s[i];
        }
    }
    cout << ans;
}
