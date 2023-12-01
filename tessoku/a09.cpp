#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<int>> ruisekiwa(h+2, vector<int>(w+2, 0));
    for(int i=0;i<n;i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        ruisekiwa[a][b]++;
        ruisekiwa[a][d+1]--;
        ruisekiwa[c+1][b]--;
        ruisekiwa[c+1][d+1]++;
    }
    for(int j=0;j<w;j++){
        for(int i=0;i<h;i++){
            ruisekiwa[i+1][j+1] += ruisekiwa[i][j+1];
        }
    }
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            ruisekiwa[i][j] += ruisekiwa[i][j-1];
            if(j == w) cout << ruisekiwa[i][j] << endl;
            else cout << ruisekiwa[i][j] << " ";
        }
    }
}