#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    reverse(s1.begin(), s1.end());
    if (s1 == s2) {
        cout << "YES";
        return 0;
    } else {
        cout << "NO";
        return 0;
    }
}