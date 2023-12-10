#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h, x;
    cin >> n >> h >> x;
    for(int i=1; i<=n; i++){
        int t;
        cin >> t;
        if(t+h>=x) {
            cout<< i << endl;
            return 0;
        }
    }
}