#include <bits/stdc++.h>
using namespace std;

int main() {
    int s1, s2, s3, s4, s5, s6, s7, s8;
    cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8;
    string ans = "Yes";
    if(!(s1<=s2 && s2<=s3 && s3<=s4 && s4<=s5 && s5<=s6 && s6<=s7 && s7<=s8)){
        ans = "No";
    }
    if(!(100<=s1 && s1<=675)) ans = "No";
    if(!(100<=s2 && s2<=675)) ans = "No";
    if(!(100<=s3 && s3<=675)) ans = "No";
    if(!(100<=s4 && s4<=675)) ans = "No";
    if(!(100<=s5 && s5<=675)) ans = "No";
    if(!(100<=s6 && s6<=675)) ans = "No";
    if(!(100<=s7 && s7<=675)) ans = "No";
    if(!(100<=s8 && s8<=675)) ans = "No";
    if(!(s1%25==0)) ans = "No";
    if(!(s2%25==0)) ans = "No";
    if(!(s3%25==0)) ans = "No";
    if(!(s4%25==0)) ans = "No";
    if(!(s5%25==0)) ans = "No";
    if(!(s6%25==0)) ans = "No";
    if(!(s7%25==0)) ans = "No";
    if(!(s8%25==0)) ans = "No";
    cout << ans << endl;
}