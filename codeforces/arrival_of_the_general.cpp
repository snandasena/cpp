#include <bits/stdc++.h>
#include <map>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int mn = INFINITY;
    int mm = 0;

    int mp = 0;
    int mx = 0;
    int last = 0;
    int fisrt = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (i == 0) {
            fisrt = x;
        } else if (i == n - 1) {
            last = x;
        }

        mn = min(mn, x);
        if (mn == x) {
            mp = i;
        }
        if (mm != x) {
            mm = max(mm, x);
            if (mm == x) {
                mx = i;
            }
        }
    }

    if (last == mn && fisrt == mm) {
        cout << 0;
    } else if (mx < mp) {
        cout << mx + (n - (mp + 1));
    } else {
        cout << mx + (n - mp - 2);
    }

    return 0;
}
