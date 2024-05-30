#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll GCD (ll a, ll b) {
    if(b==0) return a;
    return gcd(b, a%b);
}

int main() {    
    ll n, m, k;
    cin >> n >> m >> k;
    ll gcd, llm;
    gcd = GCD(n, m);
    
}