#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, s, t;
    cin >> n >> m >> s >> t;

    vector<vector<int>> adj(n+1);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    // Vecino de menor número de cada planeta
    vector<int> mn(n+1, 0);
    for (int u = 1; u <= n; ++u) {
        if (!adj[u].empty())
            mn[u] = *min_element(adj[u].begin(), adj[u].end());
    }

    // Distancia desde s hasta t
    const int INF = INT_MAX;
    vector<int> dist(n+1, INF);
    deque<int> dq;
    dist[s] = 0;
    dq.push_back(s);

    while(!dq.empty()) {
        int u = dq.front(); dq.pop_front();
        for (int v : adj[u]) {
            int w = (v == mn[u]) ? 0 : 1;
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                if (w == 0) dq.push_front(v);
                else dq.push_back(v);
            }
        }
    }
    cout << (dist[t] == INF ? -1 : dist[t]) << "\n";

    return 0;
}