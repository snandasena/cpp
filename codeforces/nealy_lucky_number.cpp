#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int n = 0;

    for (char c: s) {
        if (c == '4' || c == '7') {
            n++;
        }

        if (n > 7) {
            cout << "NO";
            return 0;
        }
    }

    if (n == 4 || n == 7) {
        cout << "YES";
        return 0;
    } else {
        cout << "NO";
        return 0;
    }

}