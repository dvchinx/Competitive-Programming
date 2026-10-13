/*
Problem: Selecting Tiles
URL: https://open.kattis.com/problems/selectingtiles
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;

    array<int, 128> need{}, cnt{};
    for (char c : t) need[c]++;

    int faltan = t.size(), l = 0, best = INT_MAX, start = 0;
    for (int r = 0; r < (int)s.size(); r++) {
        if (cnt[s[r]]++ < need[s[r]]) faltan--;      // llenó un hueco
        while (faltan == 0) {                        // ventana válida: intenta achicarla
            if (r - l + 1 < best) { best = r - l + 1; start = l; }
            if (--cnt[s[l]] < need[s[l]]) faltan++;  // abrió un hueco
            l++;
        }
    }

    if (best == INT_MAX) cout << "-1\n";
    else cout << s.substr(start, best).length() << '\n';

    return 0;
}