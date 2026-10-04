/*
Problem: 141A Amusing Joke
URL: https://codeforces.com/problemset/problem/141/A
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    unordered_map<char, int> freq;
    unordered_map<char, int> comp;

    for (int i = 0; i < s1.length(); i++) {
        freq[s1[i]]++;
    }

    for (int i = 0; i < s2.length(); i++) {
        freq[s2[i]]++;
    }

    for (int i = 0; i < s3.length(); i++) {
        comp[s3[i]]++;
    }

    if (freq == comp) cout << "YES";
    else cout << "NO";

    return 0;
}