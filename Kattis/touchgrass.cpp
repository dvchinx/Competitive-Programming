/*
Problem: Touch Grass
URL: https://open.kattis.com/problems/snertugras
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, w; cin >> h >> w;
    
    vector<string> g(h);
    for (auto& row : g) cin >> row;

    vector<vector<int>> dist(h, vector<int>(w, -1));
    queue<pair<int, int>> q;

    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            if (g[i][j] == 'S') {
                q.push({i, j}); dist[i][j] = 0;
            }

    // 4 direcciones (arriba, abajo, derecha, izquierda)
    int dr[] = {-1, 1, 0, 0}, dc[] = {0, 0, -1, 1};

    // BFS sobre el grid hasta llegar a 'G'
    while (!q.empty()) {
        auto [r, c] = q.front(); q.pop();
        
        if (g[r][c] == 'G') {
            cout << dist[r][c] << "\n"; return 0;
        }

        for (int d = 0; d < 4; d++) {
            int nr = r+dr[d], nc = c+dc[d];

            if (nr >= 0 && nr < h && nc >= 0 && nc < w &&
                g[nr][nc] != '#' && dist[nr][nc] == -1) {
                
                dist[nr][nc] = dist[r][c]+1;
                q.push({nr, nc});
            }
        }
    }
    cout << "thralatlega nettengdur\n";

    return 0;
}