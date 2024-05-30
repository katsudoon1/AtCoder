#include <bits/stdc++.h>
using namespace std;

int main() {    
    int h, w, n;
    string t;
    cin >> h >> w >> n;
    cin >> t;
    vector<string> s(h);
    for(int i=0;i<h;i++) cin >> s[i];
    int ans = 0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            int zahyo_i = i;
            int zahyo_j = j;
            bool flag = false;
            char place = s[zahyo_i][zahyo_j];
            if(place == '#') continue;
            for(int k=0;k<n;k++){
                if(flag) continue;
                if(t[k]=='L') zahyo_j--;
                else if(t[k]=='R') zahyo_j++;
                else if(t[k]=='U') zahyo_i--;
                else if(t[k]=='D') zahyo_i++;
                if(s[zahyo_i][zahyo_j]=='#'){
                    flag = true;
                    continue;
                }
            }
            if(!flag) ans++;
        }
    }
    cout << ans << endl;
}