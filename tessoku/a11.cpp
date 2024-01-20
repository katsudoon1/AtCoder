#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long a[100002], x;
    cin >> n >> x;
    for(int i=1; i<n+1; i++){
        cin >> a[i];
    }

    int l = 1;
    int r = n;

    while(l <= r){
        int mid = (l + r) / 2;
        if(a[mid] == x) {
            cout << mid;
            return 0;
        }
        else if(a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
}