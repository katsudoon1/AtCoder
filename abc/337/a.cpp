#include <bits/stdc++.h>
using namespace std;

int main() {    
    int n, takahashi, aoki;
    cin >> n;
    takahashi=0;
    aoki=0;
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        takahashi += x;
        aoki += y;
    }
    if(takahashi > aoki) cout << "Takahashi";
    else if(takahashi < aoki) cout << "Aoki";
    else cout << "Draw";
}