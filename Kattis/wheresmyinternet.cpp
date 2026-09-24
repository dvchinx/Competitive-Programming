/*
Problem: Where's My Internet??
URL: https://open.kattis.com/problems/wheresmyinternet
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    // Desde 1 hasta n
    vector<vector<int>> adj(n+1);

    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;

        // Grafo simple no dirigido
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int origen = 1, conectados = 1;
    vector<bool> visitado(n+1, false);
    queue<int> q;
    visitado[origen] = true;
    q.push(origen);
    
    // Recorrer todo el grafo
    while (!q.empty()) {
        int actual = q.front();
        q.pop();
        for (int vecino : adj[actual]) {
            if (!visitado[vecino]) {
                visitado[vecino] = true;
                q.push(vecino);
                conectados++;
            } 
        }
    }

    if (conectados == n) {
        cout << "Connected";
    } else {
        for (int i = 1; i <= n; i++) {
            if (!visitado[i])
                cout << i << "\n";
        }
    }
    return 0;
}