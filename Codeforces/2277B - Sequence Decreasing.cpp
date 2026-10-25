/*
Problem: 2277B. Sequence Decreasing
URL: https://codeforces.com/contest/2277/problem/B
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
        int n; cin >> n;

        vector<int> vi(n);
        
        long long menor = LLONG_MAX;
        for (int i = 0; i < n; ++i) {
            long long x; cin >> x;
            menor = min(menor, x);
        }
        cout << (menor < n ? n : 0) << "\n";
    }
    return 0;
}