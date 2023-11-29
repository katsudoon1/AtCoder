#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    string ans = "No";
    if(x>y){
        if(x-y<4) ans = "Yes";
    }
    else{
        if(y-x<3) ans = "Yes";
    }
    cout << ans;
}