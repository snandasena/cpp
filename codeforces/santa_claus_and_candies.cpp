#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> v;
    int n;
    cin >> n;

    int k = 1;
    while (n >= k) {
        v.emplace_back(k);
        n -= k;
        k++;
    }
    v.back() += n;
    cout << v.size() << "\n";
    for (int i : v) {
        cout << i << " ";
    }

    return 0;
}
