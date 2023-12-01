#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]<l){
            cout << l << " ";
        }else if(a[i]<=r){
            cout << a[i] << " ";
        }else{
            cout << r << " ";
        }
    }
}