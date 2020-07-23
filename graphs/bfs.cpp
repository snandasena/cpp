#include<bits/stdc++.h>

using namespace std;
const int N = 6;
vector<int> adj[N];
bool visited[N];
int dist[N];
queue<int> q;

void bfs(const int &x) {
    visited[x] = true;
    dist[x] = 0;
    q.push(x);

    while (!q.empty()) {
        int s = q.front();
        q.pop();

        for (auto &u: adj[s]) {
            if (visited[u]) continue;

            visited[u] = true;
            dist[u] = dist[s] + 1;
            q.push(u);
        }
    }
}

int main() {
    adj[0].emplace_back(1);
    adj[0].emplace_back(3);

    adj[1].emplace_back(2);
    adj[1].emplace_back(4);
    adj[1].emplace_back(0);

    adj[2].emplace_back(5);
    adj[2].emplace_back(1);

    adj[5].emplace_back(4);
    adj[5].emplace_back(2);

    adj[4].emplace_back(5);
    adj[4].emplace_back(1);

    adj[3].emplace_back(0);

    bfs(0);
    cout << (dist[5]);

    return 0;
}
