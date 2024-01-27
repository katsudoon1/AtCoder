#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s, m, l;
    cin >> n >> s >> m >> l;
    int ans = 1000000;
    for(int i=0;i<19;i++){
        for(int j=0;j<14;j++){
            for(int k=0;k<10){
                if(6*i + 8*j + 12*k >= n){
                    ans = min(ans, s*i + m*j + l*k);
                }
            }
        }
    }
    cout << ans;
}