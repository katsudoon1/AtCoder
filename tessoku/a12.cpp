#include <bits/stdc++.h>
using namespace std;

int n, k, a[100009];

long long printer(long long second) {
    long long print = 0;
    for(int i=1; i<=n; i++){
        print += second / a[i];
    }
    return print;
}

int main() {
    cin >> n >> k;
    for (int i=1; i<=n; i++) cin >> a[i];
    long long l = 1;
    long long r = 1000000001;
    long long temp;
    while (l <= r) {
        long long mid = (l + r) / 2;
        long long maisuu = printer(mid);
        if(maisuu == k) {
            temp = mid;
            break;
        }
        else if(maisuu < k) l = mid + 1;
        else r = mid - 1; 
        if (l >= r) temp = l + 1;
    }
    while(printer(temp) >= k) temp--;
    cout << temp + 1;
}