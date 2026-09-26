/*
Problem: Dralinpome
URL: https://open.kattis.com/problems/dralinpome
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    unordered_map<char, int> apariciones;

    for (char c : s) {
        apariciones[c]++;
    }

    int impares = 0;
    for (auto it : apariciones) {
        if (it.second & 1) {
            impares++;
        }
    }

    if (impares <= 1) cout << "yes" << "\n";
    else cout << "no" << "\n";

    return 0;
}