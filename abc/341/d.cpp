#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() { 
    long long n, m, k;
    cin >> n >> m >> k;

    long long GCD, lcm;
    GCD = gcd(n, m);
    lcm = n * m / GCD;

    long long temp_n, temp_m, temp;

    temp_n = lcm / n - 1;
    temp_m = lcm / m - 1;

    temp = temp_n + temp_m;

    long long kijun = (k/temp) * lcm;
    long long ans;
    if(k%temp==0) {
        long long hiki = min(n,m);
        ans = kijun - hiki;
        cout << ans;
        return 0;
    }

    int m_i = 1;
    int n_i = 1;

    int temp2 = k%temp;
    ans = kijun;
    for(int i=1;i<=temp2;i++){
        ans = kijun + min(n_i * n, m_i * m);
        if(n_i * n < m_i * m) n_i++;
        else m_i++;
    }
    cout << ans;
}