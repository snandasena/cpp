#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    sort(s.begin(), s.end());

    int count = 0;
    char pre = 0;
    for (char c:s) {
        if (pre == 0) {
            pre = c;
            count++;
        } else {
            if (pre != c && count <= 26) {
                pre = c;
                count++;
            }
        }

        if (count == 26) break;
    }

    if (count % 2 == 0) {
        cout << "CHAT WITH HER!";

    } else {
        cout << "IGNORE HIM!";
    };
    return 0;
}