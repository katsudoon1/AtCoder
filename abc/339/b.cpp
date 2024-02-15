#include <bits/stdc++.h>
using namespace std;

int main() {    
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<bool>> grid(h, vector<bool>(w, false));
    int x, y;
    x = 0;
    y = 0;
    int direction = 1;
    for(int i = 0; i < n; i++) {
        if(grid[y][x]) {
            grid[y][x] = false;
            direction++;
            if(direction == 4) direction = 0;
        }
        else {
            grid[y][x] = true;
            direction--;
            if(direction == -1) direction = 3;
        }
        if(direction == 0) x++;
        else if(direction == 1) y--;
        else if(direction == 2) x--;
        else y++;
        if(x > w-1) x = 0;
        if(y > h-1) y = 0;
        if(x < 0) x = w-1;
        if(y < 0) y = h-1;
    }
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(grid[i][j]) cout << '#';
            else cout << '.';
            if(j == w-1) cout << endl;
        }
    }
}