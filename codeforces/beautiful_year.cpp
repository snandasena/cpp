#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n != 9876) {
        n++;
        string s = to_string(n);
        set<char> st = {s[0], s[1], s[2], s[3]};
        if (st.size() == 4) {
            cout << n;
            return 0;
        }
    }

    return 0;

}