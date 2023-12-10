#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    string s;
    cin >> n >> m >> s;
    int koho[1001];
    for(int i=0; i<n; i++) koho[i] = 0;
    int muji, logo;
    muji = m;
    logo = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
           if(muji > 0) muji--;
           else logo++;
        }
        else if (s[i] == '2') {
            logo++;
        }
        else {
            koho[i] = logo;
            logo = 0;
            muji = m;
        }
        if (i == n-1) {
            koho[i] = logo;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max(ans, koho[i]);
    }
    cout << ans;
}