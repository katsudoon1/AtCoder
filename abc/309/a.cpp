#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int dif = b-a;
    if(dif == 1 and a % 3 != 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}