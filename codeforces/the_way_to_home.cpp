#include <iostream>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, d;
    cin >> n >> d;
    string s;
    cin >> s;
    int ans = 0;

    for (int i = 0, now = 0; i < n - 1;) {
        now = i;
        for (int j = 1; j <= d; j++) {
            if (s[i + j] == '1') now = i + j;
        }

        if (now == i) {
            cout << -1 << "\n";
            return 0;
        } else {
            ans++;
            i = now;
        }
    }

    cout << ans;
    return 0;
}