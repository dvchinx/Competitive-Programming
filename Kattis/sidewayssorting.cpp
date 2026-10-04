/*
Problem: Sideways Sorting
URL: https://open.kattis.com/problems/sidewayssorting
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

bool compararIgnorandoCase(const std::string& a, const std::string& b) {
    return std::lexicographical_compare(
        a.begin(), a.end(),
        b.begin(), b.end(),
        [](unsigned char char_a, unsigned char char_b) {
            return std::tolower(char_a) < std::tolower(char_b);
        }
    );
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, c;
    while (cin >> r >> c) {
        if (!r && !c) break;
        
        vector<string> words(c);
        for (int i = 0; i < r; i++) {
            string st; cin >> st;
            for (int j = 0; j < c; j++) {
                words[j].push_back(st[j]);
            }
        }
        stable_sort(words.begin(), words.end(), compararIgnorandoCase);

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << words[j][i];
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}