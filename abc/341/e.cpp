#include <bits/stdc++.h>
using namespace std;

int main() {    
    int n, q;
    string s;
    cin >> n >> q >> s;
    vector<bool> flag(n-1);
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]) flag[i] = true;
    }
    vector<int> a(n-1); 
    int temp = n;
    for(int i=n-1;i>=0;i--){
        if(flag[i]) a[i] = temp;
        else {
            temp = i;
            a[i] = temp;
        }
    }

    for(int i=0;i<q;i++){
        int suuji, l, r;
        cin >> suuji >> l >> r;
        l--;
        r--;
        if(suuji==1){
            
        }
        else{
            if(l==r){
                cout << 0 << endl;
                continue;
            }
            int ans = 0;
            for(int j=l;j<r;j++){
                if(a[j]) ans++;
            }
            cout << ans << endl;
        }
    }

}