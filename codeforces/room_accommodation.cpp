#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, p, q;

    cin >> n;
    int r = 0;
    while (n != 0) {
        cin >> p >> q;
        if (q - p >= 2) {
            r++;
        }
        n--;
    }

    cout << r;

    return 0;
}