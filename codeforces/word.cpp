#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int lc = 0;
    int uc = 0;
    for (char i : s) {
        if (isupper(i)) {
            uc++;
        } else {
            lc++;
        }
    }

    if (lc >= uc) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s;
        return 0;
    } else {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s;
        return 0;
    }

}