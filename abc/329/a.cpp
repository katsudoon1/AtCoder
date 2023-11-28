#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n;
    n = s.length();
    for(int i=0;i<n-1;i++){
        cout << s[i] <<" ";
    }
    cout << s[n-1];
}
