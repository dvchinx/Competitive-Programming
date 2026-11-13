/*
Problem: 750A. New Year and Hurry
URL: https://codeforces.com/problemset/problem/750/A
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

    int i = 1, res = 0, mins = 240 - k;
    while (mins >= 0 && res < n) {
        mins -= i * 5; i++;
        if (mins >= 0) res++;
    }

    cout << res << '\n';

    return 0;
}