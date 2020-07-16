#include <bits/stdc++.h>

using namespace std;

int main() {
    const int N = 5;

    /**
     * 1 --------->2----------->3
     * ^
     *  \          |           /
     *  \          |          /
     *   \         |         /
     *    \        |        /
     *     \       |       /
     *      \      |      /
     *       \     |     /
     *        \    |    /
     *            4   <
     *
     */
    // non-directed graph
//    vector<int> adj[N];
    vector<int> adj[N];

    adj[1].emplace_back(2);
    adj[2].emplace_back(3);
    adj[2].emplace_back(4);
    adj[3].emplace_back(4);
    adj[4].emplace_back(1);

    for (auto &u : adj[1]) {
        cout << u << "\n";
    }



}