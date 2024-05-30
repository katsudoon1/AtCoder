#include <bits/stdc++.h>
using namespace std;

int di[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dj[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {    
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i=0;i<h;i++) cin >> s[i];
    string target = "snuke";

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            for(int k=0;k<8;k++){
                int si = i;
                int sj = j;
                for(int l=0;l<5;l++){
                    if(si<0 || si>=h || sj<0 || sj>=w) break;
                    if(target[l]!=s[si][sj]) break;
                    if(l==4){
                        for(int m=0;m<5;m++) {
                            cout << i+1 << " " << j+1 << endl;
                            i += di[k];
                            j += dj[k];
                        }
                        return 0;
                    }
                    si += di[k];
                    sj += dj[k];
                }
            }
        }
    } 
}