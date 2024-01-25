#include <bits/stdc++.h>
using namespace std;

int minOperations(int H, int K, const string &S) {
    int dot_count = 0, o_count = 0, min_ops = H + 1;

    // 初期ウィンドウの設定
    for (int i = 0; i < K; ++i) {
        if (S[i] == '.') ++dot_count;
        else if (S[i] == 'o') ++o_count;
    }

    if (o_count + dot_count == K) min_ops = dot_count;

    // スライディングウィンドウ
    for (int i = K; i < H; ++i) {
        if (S[i] == '.') ++dot_count;
        if (S[i - K] == '.') --dot_count;

        if (S[i - K] == 'o') --o_count;
        if (S[i] == 'o') ++o_count;

        if (o_count + dot_count == K) {
            min_ops = min(min_ops, dot_count);
        }
    }

    return min_ops == H + 1 ? -1 : min_ops;
}

int main() {
    int H, K;
    string S;

    // 入力例
    cin >> H >> K;
    cin >> S;

    // 結果の出力
    cout << minOperations(H, K, S) << endl;

    return 0;
}
