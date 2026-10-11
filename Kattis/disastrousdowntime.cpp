/*
Problem: Disastrous Downtime
URL: https://open.kattis.com/problems/downtime
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

// Sliding Window de Tamaño Fijo K
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    // Solución en O(n + NMAXT)
    const int MAXT = 100000;

    // Almacenar linea de tiempo
    vector<int> cnt(MAXT + 1, 0);
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        cnt[t]++;
    }

    int activas = 0, best = 0;
    for (int T = 0; T <= MAXT; T++) {
        activas += cnt[T]; // entran las que llegan en T
        if (T >= 1000) activas -= cnt[T - 1000]; // salen las que llegaron hace 1000ms
        best = max(best, activas);
    }
    cout << (best + k - 1) / k << "\n";
    // Mejor opción que ceil (best / k)

    return 0;
}