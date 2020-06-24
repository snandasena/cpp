#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = unsigned long long;
#define end "\n"


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t, n;
    char c;
    cin >> t;
    while (t--) {
        vector<char> s;
        cin >> n;
        while (n--) {
            cin >> c;
            s.push_back(c);
        }

        for (int i = 0; i < s.size() - 1; i++) {
            for (int j = 0; j < s.size() - 1; j++) {
                if (s[j] == '1' && s[j + 1] == '0') {
                    s[j] = 'x';
                }
            }
        }

        for (char c : s) {
            if (c != 'x') {
                cout << c;
            }
        }

        cout << end;
    }

    return 0;
}
