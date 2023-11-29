#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> ruisekiwa(h+1, vector<int>(w+1, 0));
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cin >> ruisekiwa[i][j];
            ruisekiwa[i][j] += ruisekiwa[i][j-1];
        }
    }
    for(int j=1;j<=w;j++){
        for(int i=1;i<=h;i++){
            ruisekiwa[i][j] += ruisekiwa[i-1][j];
        }
    }
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int migisita = ruisekiwa[x2][y2];
        int hidariue = ruisekiwa[x1 - 1][y1 - 1];
        int migiue = ruisekiwa[x1 - 1][y2];
        int hidarisita = ruisekiwa[x2][y1 - 1];
        int ans = migisita - migiue - hidarisita + hidariue;
        cout << ans << endl;
    }
}