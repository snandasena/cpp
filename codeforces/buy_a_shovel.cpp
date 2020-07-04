#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int sum;
    for (int i = 1; i <= 9; i++) {
        sum = n * i;
        if ((sum - k) % 10 == 0 || sum % 10 == 0) {
            cout << i;
            break;
        }
    }

    return 0;
}
