#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x(0);
    int y;
    cin >> y;
    string s;
    while (y--) {
        cin >> s;
        if (s[1] == '+') {
            ++x;
        } else {
            --x;
        }
    }
    printf("%d", x);
    return 0;
}