#include <bits/stdc++.h>
using namespace std;

int main() { 
    char p, q;
    cin >> p >> q;
    map <char, int> mp;
    mp['A'] = 0;
    mp['B'] = 3;
    mp['C'] = 4;
    mp['D'] = 8;
    mp['E'] = 9;
    mp['F'] = 14;
    mp['G'] = 23;
    
    int ans = abs(mp[q] - mp[p]);
    cout << ans;

}