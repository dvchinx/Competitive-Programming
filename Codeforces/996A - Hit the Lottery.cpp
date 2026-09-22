/*
Problem: 996A. Hit the Lottery
URL: https://codeforces.com/problemset/problem/996/A
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Monedas reales y son fijas
    vector<int> coins = {100, 20, 10, 5, 1};
    long long x; cin >> x;

    long long totalCoins = 0;

    // Solución con algoritmo greedy
    for (int coin : coins) {
        if (x == 0) break;
        
        totalCoins += x / coin;
        x %= coin;
    }

    cout << (x == 0) ? totalCoins : -1;

    return 0;
}