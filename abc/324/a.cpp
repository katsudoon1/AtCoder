#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[110];
    cin >> n;
    bool flag = true;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(i>0){
            if(a[i-1] != a[i]){
                flag = false;
            }
        }
    }
    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}