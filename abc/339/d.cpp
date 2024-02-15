#include <bits/stdc++.h>
using namespace std;

int main() {   
    int n;
    vector<vector<string>> grid;
    for(int i = 0; i<n; i++){
        string s;
        cin >> s;
        vector<string> row;
        for(int j = 0; j<n; j++){
            row.push_back(s[j]);
        }
        grid.push_back(row);
    }
    
}