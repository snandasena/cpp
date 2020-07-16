#include <bits/stdc++.h>

using namespace std;


const int N = 2e5 + 5;
int n;
int A[N], B[N], pos[N];

map<int, int> offset;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
        pos[A[i]] = i;
    }

    for (int i = 1; i <= n; i++) cin >> B[i];

    for (int i = 1; i <= n; i++) {
        int curr = pos[B[i]] - i;
        if (curr < 0) curr += n;

        offset[curr]++;
    }

    int ans = 0;
    for (auto &p: offset) {
        ans = max(ans, p.second);
    }

    cout << ans;
    return 0;
}