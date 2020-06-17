#include <bits/stdc++.h>

using namespace std;

const string s1 = "I hate it";
const string s2 = "I hate that";
const string s3 = "I love it";
const string s4 = "I love that";

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    if (n == 1) {
        cout << s1;
        return 0;
    } else if (n == 2) {
        cout << s2 << " " << s3;
        return 0;
    }
    int i = 1;

    while (i != n + 1) {
        if (i >= 1 && i < n && i % 2 == 1) {
            cout << s2 << " ";
        } else if (i > 1 && i < n && i % 2 == 0) {
            cout << s4 << " ";
        } else if (i == n && i % 2 == 0) {
            cout << s3;
        } else if (i == n && i % 2 == 1) {
            cout << s1;
        }
        i++;
    }

    return 0;

}