#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string ans = "No";
    if(s == "ACE" or s == "BDF" or s == "CEG" or s == "DFA" or s == "EGB" or s == "FAC" or s == "GBD" ) ans = "Yes";
    cout << ans;
}