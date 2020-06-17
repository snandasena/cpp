#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a;
    string b;
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++) {
        int x = a[i] - '0';
        int y = b[i] - '0';
        cout << (x + y) % 2;
    }

    return 0;
}


