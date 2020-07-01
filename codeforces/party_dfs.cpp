#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = unsigned long long;

int n;
vector<int> L[2002];
vector<bool> visits(2002, false);
vector<int> S(2002);
int ans;

void dfs(int id, int dep) {
    visits[id] = true;

    if (dep > ans) {
        ans = dep;
    }

    while (!L[id].empty()) {
        int k = L[id].back();
        if (!visits[k]) {
            dfs(k, dep + 1);
        }

        L[id].pop_back();
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> S[i];
        S.emplace_back(n);
        if (n != -1) {
            L[S[i]].emplace_back(i);
        }
    }

    ans = 0;

    for (int i = 1; i <= n; i++) {
        if (!visits[i] && S[i] == -1) {
            dfs(i, 1);
        }
    }

    cout << ans;
    return 0;

}
