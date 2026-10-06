/*
Problem: 1899A Game with Integers
URL: https://codeforces.com/problemset/problem/1899/A
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

        if (n % 3 != 0) {
            cout << "First" << "\n";
        } else {
            cout << "Second" << "\n";
        }
    }
    return 0;
}