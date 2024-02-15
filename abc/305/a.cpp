#include <bits/stdc++.h>
using namespace std;

int main() {    
    int n, temp;
    cin >> n;
    temp = n/5;
    if(n%5<3) cout << temp*5;
    else cout << (temp+1)*5;
}