#include <bits/stdc++.h>
using namespace std;

int main() {    
    int n;
    long long a[101];
    string s[101];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s[i] >> a[i];
    }
    long long min = 1000000001;
    int min_index;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min = a[i];
            min_index = i;
        }
    }
    int index = min_index;
    for(int i=0;i<n;i++){
        cout<<s[index]<<endl;
        index++;
        if(index==n) index = 0;
    }
}