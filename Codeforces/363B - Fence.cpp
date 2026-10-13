/*
Problem: 363B Fence
URL: https://codeforces.com/problemset/problem/363/B
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (auto& x : a) cin >> x;

    long long sum = 0, best_sum = LLONG_MAX;
    int best_idx;
    // Sliding Window con tamaño fijo K
    for (int r = 0; r < n; r++) {
        sum += a[r];
        if (r >= k) sum -= a[r-k];
        if (r >= k-1) {
            if (sum < best_sum) {
                best_idx = r-k+1; // indice de inicio
                best_sum = sum;
            }
        }
    }
    cout << best_idx + 1 << "\n"; // print 1-based

    return 0;
}