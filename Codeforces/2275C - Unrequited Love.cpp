/*
Problem: 2275C. Unrequited Love
URL: https://codeforces.com/contest/2275/problem/C
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
 
        vector<ll> a(n+1);
        for (int i = 1; i <= n; ++i) cin >> a[i];
 
        vector<ll> V(n+1, 0);
        for (int i = 1; i <= n-4; ++i) {
            V[i] = a[i] + a[i+2] - a[i+4];
        }
 
        vector<int> odd_idxs, even_idxs;
        for (int i = 1; i <= n-4; ++i) {
            if (i % 2 != 0) odd_idxs.push_back(i);
            else even_idxs.push_back(i);
        }
 
        ll total_pairs = 0;
 
        // Contar parejas con distinta paridad (Impar + Par)
        unordered_map<ll, ll> odd_freq, even_freq;
        for (int idx : odd_idxs) odd_freq[V[idx]]++;
        for (int idx : even_idxs) even_freq[V[idx]]++;
 
        for (auto const& [val, count_odd] : odd_freq) {
            if (even_freq.count(val)) {
                total_pairs += count_odd * even_freq[val];
            }
        }
 
        // Contar parejas de la misma paridad (Impar + Impar)
        unordered_map<ll, ll> freq_right;
        int j = (int)odd_idxs.size() - 1;
        for (int i = (int)odd_idxs.size() - 1; i >= 0; i--) {
            int x = odd_idxs[i];
            // Agregar a la derecha todos los y tales que y >= x + 6
            while (j > i && odd_idxs[j] >= x + 6) {
                freq_right[V[odd_idxs[j]]]++;
                j--;
            }
            total_pairs += freq_right[V[x]];
        }
 
        // Contar parejas de la misma paridad (Par + Par)
        freq_right.clear();
        j = (int)even_idxs.size() - 1;
        for (int i = (int)even_idxs.size() - 1; i >= 0; i--) {
            int x = even_idxs[i];
            while (j > i && even_idxs[j] >= x + 6) {
                freq_right[V[even_idxs[j]]]++;
                j--;
            }
            total_pairs += freq_right[V[x]];
        }
        cout << total_pairs << "\n";
    }
    return 0;
}