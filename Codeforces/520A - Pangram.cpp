/*
Problem: 520A Pangram
URL: https://codeforces.com/problemset/problem/520/A
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    cin.ignore();
    string s; cin >> s;

    if (n < 26) {
        cout << "NO";
        return 0;
    }

    unordered_set<char> alphabet;
    alphabet.reserve(26);

    for (char c : s) {
        alphabet.insert(tolower(c));
        if (alphabet.size() == 26) break;
    }
    cout << ((alphabet.size() == 26) ? "YES" : "NO");

    return 0;
}