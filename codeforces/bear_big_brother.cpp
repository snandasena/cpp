#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;
    int ans = 0;
    while (a <= b) {
        a = a * 3;
        b = b * 2;
        ans++;
    }
    cout << ans;
    return 0;
}