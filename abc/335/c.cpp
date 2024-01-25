#include <bits/stdc++.h>
using namespace std;

int main() {    
    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> p;
    for(int i=1; i<=n; i++){
        p.push_back(make_pair(i, 0));
    }
    for(int i=0; i<q; i++){
        int q1;
        string q2;
        cin >> q1 >> q2;
        if(q1==1){
            pair<int, int> tmp = p[0];
            if(q2=="R") tmp.first++;
            else if(q2=="L") tmp.first--;
            else if(q2=="U") tmp.second++;
            else tmp.second--;

            for(int j=1; j<n; j++){
                p[j] = p[j-1];
            }
            p[0] = tmp;
        }
    }
}