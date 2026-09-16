/*
Problem: 136A Presents
URL: https://codeforces.com/problemset/problem/136/A
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> permutacionInversa(const vector<int>& v) {
    int n = v.size();
    vector<int> inversa(n);

    for (int i = 0; i < n; ++i) {
        // Partiendo desde base 0 (pedido por el ejercicio)
        inversa[v[i] - 1] = i + 1;
    }

    return inversa;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    vector<int> inv = permutacionInversa(v);

    for (int x : inv) {
        cout << x << " ";
    }
    return 0;
}