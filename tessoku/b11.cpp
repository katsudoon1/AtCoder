#include <bits/stdc++.h>
using namespace std;

int search(const vector<int>& a, int x){
    int pos = lower_bound(a.begin(), a.end(), x) - a.begin();
    return pos;   
}

int main() {
    int n, q;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    cin >> q;
    for(int i = 0; i < q; i++) {
        int x;
        cin >> x;
        int ans = search(a, x);
        if(x > a[n-1]) ans = n;
        cout << ans << endl;
    }
}
