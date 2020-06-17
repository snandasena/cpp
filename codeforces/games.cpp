#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;

    int host[n];
    int guest[n];

    for (int i = 0; i < n; i++) {
        int h, g;
        cin >> h >> g;
        host[i] = h;
        guest[i] = g;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && host[i] == guest[j]) ans++;
        }
    }

    cout << ans;
    return 0;
}