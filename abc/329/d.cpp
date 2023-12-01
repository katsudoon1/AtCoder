#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    // vector<int> a(m, 0);
    vector<int> hito(n+1, 0);
    int temp;
    cin >> temp;
    hito[temp]++;
    cout << temp << endl;
    for(int i=2;i<=m;i++){
        int a;
        cin >> a;
        hito[a]++;
        if(hito[a]==hito[temp]){
            if(a<temp) temp = a;
        }
        else if(hito[a]>hito[temp]){
            temp = a;
        }
        cout << temp << endl;
    }    
}