#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = long long;
using i64 = int64_t;
const string S = "codeforces";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    i64 k;
    cin >> k;

    for (int l = 10;; l++) {
        i64 v = 1;
        string T;
        for (int i = 0; i < 10; i++) {
            i64 cnt = l / 10 + (i < (l % 10));
            for (int z = 0; z < cnt; z++) T += S[i];
            v *= cnt;
        }
        if (v >= k) {
            cout << T << "\n";
            break;
        }
    }

    return 0;
}