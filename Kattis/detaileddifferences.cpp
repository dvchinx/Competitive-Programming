/*
Problem: Detailed Differences
URL: https://open.kattis.com/problems/detaileddifferences
Language: C++
Author: dvchinx
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;

    int T;
    cin >> T;
    cin.ignore(); // Eliminar carácter "\n" del buffer

    // Solución en O(n)
    while (T--) {
        string res = "";
        getline(cin, s1);
        getline(cin, s2);

        int len = s1.length();
        for (int i = 0; i < len; i++) {
            if (s1[i] == s2[i]) res += ".";
            else res += "*";
        }
        cout << s1 << "\n" << s2 << "\n" << res << "\n\n";
    }
    return 0;
}