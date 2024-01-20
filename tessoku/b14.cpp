#include <bits/stdc++.h>
using namespace std;

int n;
long long k, a[39];

vector<long long> listup(vector<long long> x){
    vector<long long> sumlist;
    for(int i=0; i<(1<<x.size()); i++){
        sumlist.push_back(0);
        for(int j=0; j<x.size(); j++){
            int j_keta;
            j_keta = (i / (1<<j)) % 2;
            if(j_keta==1) sumlist[i] += x[j];
        }
    }
    return sumlist;
}

int main() {
    cin >> n >> k;
    for(int i=1; i<n+1; i++) cin >> a[i];
    
    vector<long long> b, c;
    for(int i=1; i<=n/2; i++) b.push_back(a[i]);
    for(int i=(n/2)+1; i<=n; i++) c.push_back(a[i]);
    vector<long long> bsumlist, csumlist;
    bsumlist = listup(b);
    csumlist = listup(c);
    bool flag = false;
    sort(csumlist.begin(), csumlist.end());
    for(int i=0; i<bsumlist.size(); i++){
        long long sagasu = k - bsumlist[i];
        int temp = lower_bound(csumlist.begin(), csumlist.end(), sagasu) - csumlist.begin();
        if((temp <= csumlist.size()) && (csumlist[temp] == sagasu)) flag = true;
    }
    if(flag) cout << "Yes";
    else cout << "No";
}