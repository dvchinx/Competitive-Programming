/*
Problem: Democratic Naming
URL: https://open.kattis.com/problems/democraticnaming
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<array<int, 26>> cnt(m);
    for (auto &c : cnt) c.fill(0);

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) cnt[j][s[j] - 'a']++;
    }

    string res(m, 'a');
    for (int j = 0; j < m; j++) {
        int best = 0;
        for (int c = 1; c < 26; c++)
            if (cnt[j][c] > cnt[j][best]) best = c;
        res[j] = 'a' + best;
    }

    cout << res << '\n';
    return 0;
}