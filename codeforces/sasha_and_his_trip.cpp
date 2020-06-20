#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = unsigned long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    deque<int> q;
    int n, v;
    ll cost = 0;
    cin >> n >> v;
    for (int i = 1; i <= v; i++) q.push_back(1);

    for (int i = 2; i <= n; i++) {
        cost += q.front();
        q.pop_front();
        q.push_back(i);
    }

    cout << cost;
    return 0;
}