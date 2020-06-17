#include <bits/stdc++.h>

using namespace std;

int main() {

    int r, m, c;
    cin >> r >> m >> c;

    int sum = r * c * (1 + c) / 2;

    int ans = sum - m;
    if (ans < 0) {
        cout << 0;
        return 0;
    }
    cout << ans;

    return 0;
}