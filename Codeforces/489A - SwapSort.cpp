/*
Problem: SwapSort
URL: https://codeforces.com/problemset/problem/489/A
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll seleccion(vector<int>& v, vector<int>& moved) {
    int n = v.size();
    ll swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        int k = i;
        for (int j = i + 1; j < n; j++)
            if (v[j] < v[k]) k = j;
        if (k != i) {
            swap(v[i], v[k]);
            moved.push_back(i);
            moved.push_back(k);
            swaps++;
        }
    }
    return swaps;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& x : v) cin >> x;

    vector<int> moved;
    cout << seleccion(v, moved) << "\n";

    size_t i = 0;
    while (i < moved.size()) {
        cout << moved[i] << " " << moved[i+1] << "\n";
        i+=2;
    }
    return 0;
}