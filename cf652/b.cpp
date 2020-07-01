#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = unsigned long long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, x;
    cin >> t;
    vector<int> v;
    while (t--) {
        cin >> x;
        v.push_back(x);
    }

    int curr = 0;
    int mx = 0;
    int pre = 0;
    int pc = 0;
    for (int i = 0; i < v.size(); i++) {
        if (i == 0) {
            curr = 1;
            pre = v[i];
        } else if (pre == v[i]) {
            curr++;
        } else {
            mx = max(mx, min(pc, curr) * 2);
            pc = curr;
            curr = 1;
            pre = v[i];
        }
    }

    mx = max(mx, min(pc, curr) * 2);
    cout << mx << "\n";

    return 0;
}
