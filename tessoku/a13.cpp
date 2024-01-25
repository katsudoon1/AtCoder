#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long k, a[100009];
    cin >> n >> k;
    for(int i=1; i<=n; i++) cin >> a[i];
    int index = 2;
    long long ans = 0;
    for(int i=1; i<=n; i++){
        bool flag = true;
        while(flag){
            if(index > n) {
                ans += n - i;
                break;
            }
            if(a[index] - a[i] <= k) index ++;
            else {
                flag = false;
                ans += index - i - 1;
            }
        }
    }
    cout << ans;
}

/*
模範解答

#include <iostream>
using namespace std;

int N, K;
int A[100009], R[100009];

int main() {
	// 入力
	cin >> N >> K;
	for (int i = 1; i <= N; i++) cin >> A[i];

	// しゃくとり法
	for (int i = 1; i <= N - 1; i++) {
		// スタート地点を決める
		if (i == 1) R[i] = 1;
		else R[i] = R[i - 1];

		// ギリギリまで増やしていく
		while (R[i] < N && A[R[i] + 1] - A[i] <= K) {
			R[i] += 1;
		}
	}

	// 出力（答えは最大 50 億程度になるので long long 型を使う必要があります）
	long long Answer = 0;
	for (int i = 1; i <= N - 1; i++) Answer += (R[i] - i);
	cout << Answer << endl;
	return 0;
}
*/