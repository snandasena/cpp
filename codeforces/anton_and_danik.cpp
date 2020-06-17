#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    cin >> n >> s;
    auto len = (int) s.size();
    sort(s.begin(), s.end());

    int c = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] == 'A') {
            c++;
        } else {
            break;
        }
    }

    if (c > len - c) {
        cout << "Anton";
        return 0;
    } else if (c < len - c) {
        cout << "Danik";
        return 0;
    } else {
        cout << "Friendship";
        return 0;
    }

}