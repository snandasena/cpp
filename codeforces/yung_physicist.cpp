#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, a, b, c;

    cin >> n;
    ll sum1 = 0;
    ll sum2 = 0;
    ll sum3 = 0;

    while (n--) {
        cin >> a >> b >> c;
        sum1 += a;
        sum2 += b;
        sum3 += c;

    }

    if (sum1 == 0 && sum2 == 0 && sum3 == 0) {
        cout << "YES";
        return 0;
    } else {
        cout << "NO";
        return 0;
    }

}