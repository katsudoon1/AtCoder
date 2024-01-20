#include <bits/stdc++.h>
using namespace std;

long long n, k;
long long a[100009];

bool check(long long second) {
    long long print = 0;
    for(int i=1; i<=n; i++){
        print += second / a[i];
    }
    if(print >= k) return true;
    else return false;
}

int main() {
    cin >> n >> k;
    for (int i=1; i<=n; i++) cin >> a[i];
    long long l = 1;
    long long r = 1000000001;
    while (l < r) {
        long long mid = (l + r) / 2;
        bool dainari = check(mid);
        if(dainari) r = mid;
        else l = mid + 1;
    }
    cout << l;
}