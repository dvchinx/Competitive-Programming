/*
Problem: 1690D. Black and White Stripe
URL: https://codeforces.com/contest/1690/problem/d
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        string s; cin >> s;

        // Sliding Window con tamaño fijo K
        long long suma = 0, best = LLONG_MAX;
        for (int r = 0; r < n; r++) {
            suma += (s[r] == 'W'); // Suma minima de 'W' en s
            if (r >= k) suma -= (s[r-k] == 'W');
            if (r >= k-1) best = min(best, suma);
        }
        cout << best << "\n";
    }
    return 0;
}