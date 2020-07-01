#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = unsigned long long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    if (n % 2 == 0) {
        //        int ans = 2;
        //        for (int i = 1; i < n / 2; i++) {
        //            ans <<= 1;
        //        }
        //        cout << ans;
        cout << (1 << n / 2);

    } else {
        cout << 0;
    }
    return 0;

}
