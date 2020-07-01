#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = unsigned long long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &i: a) cin >> i;
    int c = 0;
    for (int i = 1; i < n; i++) {
        int curr = max(0, k - a[i] - a[i - 1]);
        a[i] += curr;
        c += curr;
    }
    cout << c << "\n";
    for (int i : a) cout << i << " ";
    return 0;
}
