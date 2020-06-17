#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int getMinMax(ll a) {
    string s = to_string(a);
    sort(s.begin(), s.end());
    int min = s[0] - '0';
    int max = s[s.length() - 1] - '0';

    return min * max;
}

void test_case(ll a, ll k) {
    for (ll i = 1; i < k; i++) {
        int res = getMinMax(a);
        if (!res) {
            break;
        }
        a = a + res;
    }

    cout << a << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    ll a, k;
    while (n != 0) {
        cin >> a >> k;
        if (k == 1) {
            cout << a << "\n";
        } else {
            test_case(a, k);
        }
        n--;
    }

    return 0;

}