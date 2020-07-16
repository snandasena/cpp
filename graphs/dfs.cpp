#include <bits/stdc++.h>

using namespace std;
const int N = 6;
bool visited[N];
vector<int> adj[N];

void dfs(int s) {

    if (visited[s]) return;
    visited[s] = true;
    cout << s << " -> ";

    for (auto &u: adj[s]) {
        dfs(u);
    }

}

int main() {

    adj[1].emplace_back(2);
    adj[1].emplace_back(4);
    adj[2].emplace_back(2);
    adj[2].emplace_back(3);
    adj[2].emplace_back(5);
    adj[3].emplace_back(5);
    adj[4].emplace_back(1);

    adj[3].emplace_back(2);
    adj[5].emplace_back(2);
    adj[5].emplace_back(3);


    dfs(1);
    return 0;
}