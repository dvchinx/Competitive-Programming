/*
Problem: 443A Anton and Letters
URL: https://codeforces.com/problemset/problem/443/A
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 's' solo contiene alfabeto en minuscula
    // no hay necesidad de hacer conversiones ni validaciones
    string s; getline(cin, s);
    unordered_set<char> letters;

    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            letters.insert(s[i]);
        }
    }
    cout << letters.size();

    return 0;
}