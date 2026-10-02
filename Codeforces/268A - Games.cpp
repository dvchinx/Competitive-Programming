/*
Problem: 268A Games
URL: https://codeforces.com/problemset/problem/268/A
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> uniH(n), uniG(n);

    for (int i = 0; i < n; i++) {
        int h, g; cin >> h >> g;
        uniH[i] = h; uniG[i] = g;
    }

    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (uniH[i] == uniG[j]) res++;
        }
    }
    cout << res;

    return 0;
}

/*
También se puede resolver con un unordered_map
y contar la frecuencia, resolviendo en O(n), pero
está solución O(n^2) respondió más rápido que
haciendolo con unordered_map en el juez de
codeforces (124 ms vs 92 ms).
*/