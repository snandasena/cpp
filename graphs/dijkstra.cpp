#include <bits/stdc++.h>

using namespace std;
const int N = 5;
vector<pair<int, int>> adj[N];
vector<bool> visited(N, false);
vector<int> dist(N, INFINITY);
queue<pair<int, int >> q;

void dijkstra(int x) {
    dist[x] = 0;
    q.emplace(0, x);
    while (!q.empty()) {
        int a = q.back().second;
        q.pop();
        if (visited[a]) continue;
        visited[a] = true;

        for (auto &u : adj[a]) {
            int b = u.first, w = u.second;
            if (dist[a] + w < dist[b]) {
                dist[b] = dist[a] + w;
                q.emplace(-dist[b], b);
            }
        }
    }

}

int main() {
    adj[0].emplace_back(1, 5);
    adj[0].emplace_back(2, 3);
    adj[1].emplace_back(4, 2);
    adj[2].emplace_back(3, 1);
    adj[3].emplace_back(1, 7);
    adj[3].emplace_back(1, 3);
    adj[4].emplace_back(3, 2);

    dijkstra(0);
    cout << dist[4];

    return 0;
}