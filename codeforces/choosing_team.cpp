#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = unsigned long long;

int arr[20000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (5 - arr[i] >= k) {
            ans++;
        }
    }

    cout << ans / 3;

    return 0;
}
//
// Created by sajith on 6/24/20.
//

