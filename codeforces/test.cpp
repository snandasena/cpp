#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = unsigned long long;
#define end "\n"


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, a;
    cin >> t;
    while (t--) {
        cin >> a;
        if ((a / 2) % 2 != 0) cout << "NO" << end;
        else {
            cout << "YES" << end;
            for (int i = 0; i < a; i += 2) {
                cout << i + 2 << " ";
            }

            int now = 1;
            for (int i = 1; i < a; i += 2) {
                if (i != a - 1) {
                    cout << i << " ";
                } else {
                    cout << now + i << end;
                }
                now++;
            }
        }
    }


    return 0;
}
