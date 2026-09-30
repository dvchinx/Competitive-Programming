/*
Problem: 510A Fox and Snake
URL: https://codeforces.com/problemset/problem/510/A
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int aux = 0, r = 1;
    while (n--) {
        if (aux % 2 == 0) {
            for (int i = 0; i < m; i++)
            cout << '#';
        }
        else if (r == 1) {
            for (int i = 0; i < m-1; i++)
                cout << '.';
            cout << '#';
            r = 0;
        }
        else if (r == 0) {
            cout << '#';
            r = 1;
            for (int i = 0; i < m-1; i++)
                cout << '.';
        }
        cout << "\n";
        aux++;
    }
    return 0;
}