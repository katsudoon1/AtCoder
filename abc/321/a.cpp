#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int temp =n;
    int a[10];
    int key = 0;
    while(temp>0){
        int wari = pow(10, key);
        a[key] = (n/wari)%10;
        temp /= 10;
        if(temp>0) key++;
    }
    string ans = "Yes";
    for(int i=key;i>0;i--){
        if(a[i]<=a[i-1]){
            ans = "No";
            break;
        }
    }
    cout << ans;
}