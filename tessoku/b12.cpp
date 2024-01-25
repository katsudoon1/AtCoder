#include <bits/stdc++.h>
using namespace std;

int n;
double func(double x){
    return (x * x * x) + x;
}

int main() {
    cin >> n;
    double l = 0.9, r = 100;
    while(r-l > 0.00001){
        double mid = (l + r) / 2;
        if(func(mid) - 0.00001 < n && func(mid) + 0.00001 > n){
            cout << fixed << setprecision(5) << mid;
            return 0;
        }
        else if(func(mid) < n) l = mid;
        else r = mid;
        if(r-l <= 0.00001) cout << fixed << setprecision(5) << l;
    }
}

/*
模範解答

#include <iostream>
using namespace std;
 
// 関数 f
double f(double x) {
	return x * x * x + x;
}
 
int main() {
	// 入力
	int N;
	cin >> N;
 
	// 二分探索
	double Left = 0, Right = 100, Mid;
	for (int i = 0; i < 20; i++) {
		Mid = (Left + Right) / 2.0;
		double val = f(Mid);
 
		// 探索範囲を絞る
		if (val > 1.0 * N) Right = Mid; // 左半分に絞られる
		else Left = 　Mid; // 右半分に絞られる
	}
 
	// 出力
	printf("%.12lf\n", Mid);
	return 0;
}

*/