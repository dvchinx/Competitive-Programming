/*
Problem: Soft Drinking
URL: https://codeforces.com/problemset/problem/151/A
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, l, c, d, p, nl, np;
    cin >> n >> l >> k >> c >> d >> p >> nl >> np;

    int x, y, z;
    x = k * l / nl;
    y = c * d;
    z = p / np;

    cout << min({x, y, z}) / n << "\n";

    return 0;
}