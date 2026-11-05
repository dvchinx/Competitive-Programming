/*
Problem: 155A I_love_%username%
URL: https://codeforces.com/problemset/problem/155/A
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    int i_1; cin >> i_1; n--;

    int menor = i_1, mayor = i_1, res = 0;
    while (n--) {
        int t; cin >> t;

        if (t < menor) {
            menor = t; res++;
        }
        else if (t > mayor) {
            mayor = t; res++;
        }
    }
    cout << res << "\n";

    return 0;
}