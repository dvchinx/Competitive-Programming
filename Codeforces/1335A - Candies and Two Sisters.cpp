/*
Problem: 1335A - Candies and Two Sisters
URL: https://codeforces.com/problemset/problem/1335/A
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        cout << fixed << setprecision(0) << floor((n-1) / 2) << "\n";
    }

    return 0;
}