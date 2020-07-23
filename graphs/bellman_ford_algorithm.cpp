#include <bits/stdc++.h>

using namespace std;

const int N = 5;
vector<tuple<int, int, int> > edges;
vector<int> dist(N + 1, INFINITY);

void bellman_ford(int x) {
    dist[x] = 0;
    for (int i = 0; i < N; ++i) {
        for (auto e: edges) {
            int a, b, w;
            tie(a, b, w) = e;
            dist[b] = min(dist[b], dist[a] + w);
        }
    }
}

int main() {
    edges.emplace_back(1, 2, 5);
    edges.emplace_back(1, 3, 3);
    edges.emplace_back(2, 5, 2);
    edges.emplace_back(3, 4, 1);
    edges.emplace_back(1, 4, 7);
    edges.emplace_back(2, 4, 3);
    edges.emplace_back(4, 5, 2);

    bellman_ford(1);

    cout<<dist[2];
    return 0;
}