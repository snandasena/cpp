#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;

    int cnt = 0;
    char pre = 2;
    for (char x: s) {
        if (pre == 2) {
            pre = x;
            cnt++;
        } else if (pre !=x) {
            pre = x;
            cnt = 1;
        } else if (pre == x) {
            cnt++;
        }

        if (cnt >= 7) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;

}