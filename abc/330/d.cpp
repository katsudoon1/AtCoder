#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    vector<long long> bi(n, 0), bj(n, 0);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[i][j]=='o'){
                bi[i]++;
                bj[j]++;
            }
        }
    }
    long long ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[i][j]=='o'){
                ans += (bi[i]-1)*(bj[j]-1);
            }
        }
    }
    cout << ans;
}