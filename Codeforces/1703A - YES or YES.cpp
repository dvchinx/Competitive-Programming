/*
Problem: 1703A. YES or YES?
URL: https://codeforces.com/contest/1703/problem/a
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    while (n--) {
        string s; cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::toupper);

        if (s == "YES") cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }

    return 0;
}