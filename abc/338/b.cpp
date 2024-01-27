#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int a[50];
    for(int i=0;i<50;i++){
        a[i]=0;
    }
    int n;
    n=s.size();
    for(int i=0;i<n;i++){
        a[s[i]-'a']++;
    }
    int max=0;
    char ans = 'a';
    for(int i=0;i<50;i++){
        if(a[i]>max){
            max=a[i];
            ans = 'a'+i;
        }
    }
    cout << ans;
}